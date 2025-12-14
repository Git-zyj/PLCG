#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13620;
unsigned int var_2 = 3007675269U;
long long int var_4 = 2909576023702597116LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 9134977107250796011ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 1717851425001684869ULL;
unsigned int var_13 = 147231577U;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-98;
unsigned long long int var_20 = 12123862164185528855ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
