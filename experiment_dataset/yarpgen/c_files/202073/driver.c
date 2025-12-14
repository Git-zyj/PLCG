#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)29;
signed char var_3 = (signed char)-27;
signed char var_13 = (signed char)-76;
long long int var_18 = -6431788711344077492LL;
int zero = 0;
signed char var_20 = (signed char)88;
unsigned char var_21 = (unsigned char)112;
void init() {
}

void checksum() {
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
