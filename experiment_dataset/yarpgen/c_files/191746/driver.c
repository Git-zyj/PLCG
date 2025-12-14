#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)131;
signed char var_5 = (signed char)-67;
unsigned short var_7 = (unsigned short)11664;
unsigned long long int var_8 = 6542281811775588756ULL;
unsigned long long int var_9 = 17636961647088823826ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)155;
unsigned char var_13 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
