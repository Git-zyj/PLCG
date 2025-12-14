#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
signed char var_1 = (signed char)-78;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-72;
unsigned short var_8 = (unsigned short)17852;
unsigned int var_11 = 816186176U;
signed char var_14 = (signed char)44;
unsigned int var_15 = 3519485821U;
unsigned long long int var_17 = 12936678846570587275ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
