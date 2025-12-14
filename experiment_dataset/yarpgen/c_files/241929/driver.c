#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
unsigned short var_1 = (unsigned short)7131;
unsigned long long int var_2 = 7413052087258175621ULL;
unsigned long long int var_5 = 11935173856108851319ULL;
short var_8 = (short)18578;
int zero = 0;
short var_10 = (short)16709;
unsigned char var_11 = (unsigned char)90;
short var_12 = (short)19699;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
