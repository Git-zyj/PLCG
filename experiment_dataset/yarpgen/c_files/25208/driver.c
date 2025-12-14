#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4436872643045250091ULL;
unsigned long long int var_3 = 4714210989303328966ULL;
unsigned long long int var_6 = 8138607131577593342ULL;
unsigned int var_9 = 1106438169U;
int zero = 0;
short var_11 = (short)-12054;
unsigned short var_12 = (unsigned short)46411;
int var_13 = 700473304;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
