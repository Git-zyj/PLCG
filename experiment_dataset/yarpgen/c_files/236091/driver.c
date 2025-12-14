#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1126784109;
int var_2 = -1885838490;
_Bool var_4 = (_Bool)0;
int var_7 = 187535325;
signed char var_8 = (signed char)-126;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)0;
long long int var_19 = 8162342951778643904LL;
int zero = 0;
long long int var_20 = 8247739540299164156LL;
signed char var_21 = (signed char)-75;
int var_22 = 505047348;
long long int var_23 = 2130561160035927476LL;
unsigned char var_24 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
