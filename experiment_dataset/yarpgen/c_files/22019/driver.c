#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3693209396828388685LL;
signed char var_2 = (signed char)-29;
int var_3 = -21119636;
unsigned int var_5 = 3792107599U;
unsigned int var_6 = 4245196206U;
signed char var_10 = (signed char)-2;
signed char var_11 = (signed char)78;
unsigned char var_12 = (unsigned char)195;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 17008445093617428193ULL;
signed char var_18 = (signed char)32;
signed char var_19 = (signed char)87;
unsigned char var_20 = (unsigned char)139;
void init() {
}

void checksum() {
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
