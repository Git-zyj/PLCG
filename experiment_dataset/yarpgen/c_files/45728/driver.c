#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)117;
unsigned int var_6 = 2772387747U;
signed char var_8 = (signed char)114;
long long int var_10 = -6670424133109724902LL;
unsigned char var_11 = (unsigned char)120;
unsigned int var_16 = 2666448750U;
int zero = 0;
signed char var_17 = (signed char)72;
unsigned int var_18 = 2016642284U;
int var_19 = -849367630;
long long int var_20 = -329394726469207105LL;
unsigned int var_21 = 1870650150U;
unsigned char var_22 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
