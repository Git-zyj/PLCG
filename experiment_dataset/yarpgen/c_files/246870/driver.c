#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3983600430U;
signed char var_4 = (signed char)-44;
unsigned int var_6 = 571627517U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_15 = 15760267449157416231ULL;
_Bool var_17 = (_Bool)0;
int var_18 = 216719280;
int zero = 0;
int var_19 = 508096291;
long long int var_20 = 1062051646914332348LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2464278799U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
