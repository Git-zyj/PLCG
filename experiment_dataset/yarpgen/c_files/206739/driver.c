#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-7;
int var_8 = -1054379645;
unsigned int var_13 = 1298602645U;
long long int var_14 = -2479443055470715976LL;
int zero = 0;
long long int var_19 = -8862585212733401629LL;
unsigned char var_20 = (unsigned char)91;
long long int var_21 = 8193963935408580310LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
