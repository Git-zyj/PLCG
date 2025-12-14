#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16984937471092499296ULL;
int var_1 = -2083630548;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)229;
int var_5 = -1475468867;
unsigned int var_7 = 3890799633U;
long long int var_8 = -3729190100762693998LL;
int var_10 = 504799640;
unsigned int var_11 = 2282092091U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 10539059445016182249ULL;
int zero = 0;
signed char var_14 = (signed char)103;
unsigned char var_15 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
