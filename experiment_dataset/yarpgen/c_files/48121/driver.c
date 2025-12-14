#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1918802661;
unsigned int var_2 = 2652974581U;
unsigned char var_3 = (unsigned char)179;
signed char var_6 = (signed char)-37;
unsigned int var_8 = 1733852595U;
unsigned short var_9 = (unsigned short)18202;
int zero = 0;
unsigned long long int var_10 = 1023623548436308403ULL;
unsigned short var_11 = (unsigned short)17680;
unsigned short var_12 = (unsigned short)53394;
unsigned int var_13 = 2892933631U;
unsigned short var_14 = (unsigned short)50587;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
