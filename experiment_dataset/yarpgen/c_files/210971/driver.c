#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10931;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_8 = 6382213442236221207ULL;
signed char var_12 = (signed char)-124;
int var_13 = -705588010;
unsigned long long int var_14 = 2561035089313501816ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)11;
long long int var_17 = -3170627813057426097LL;
signed char var_18 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
