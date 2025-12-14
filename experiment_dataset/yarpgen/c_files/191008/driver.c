#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5662858235139794328LL;
unsigned char var_1 = (unsigned char)36;
long long int var_3 = 5800373899627832912LL;
unsigned int var_4 = 256257800U;
unsigned short var_6 = (unsigned short)15397;
signed char var_7 = (signed char)-106;
unsigned long long int var_8 = 10848742900519086129ULL;
unsigned long long int var_11 = 14854851053420449513ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)215;
signed char var_15 = (signed char)-23;
unsigned long long int var_16 = 13250327054446244646ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
