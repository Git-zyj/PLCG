#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 483875012U;
int var_9 = -1073796100;
unsigned int var_14 = 3341991834U;
unsigned char var_18 = (unsigned char)89;
int zero = 0;
unsigned int var_20 = 3323979248U;
unsigned char var_21 = (unsigned char)223;
int var_22 = -473061993;
short var_23 = (short)21274;
int var_24 = 263490255;
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
