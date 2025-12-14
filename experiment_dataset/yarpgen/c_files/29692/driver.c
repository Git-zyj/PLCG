#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2832870560028146095ULL;
signed char var_1 = (signed char)-106;
int var_3 = 2026988370;
signed char var_4 = (signed char)48;
unsigned char var_7 = (unsigned char)162;
short var_9 = (short)30564;
long long int var_10 = 8166344084173592784LL;
int zero = 0;
unsigned short var_11 = (unsigned short)47248;
unsigned char var_12 = (unsigned char)22;
void init() {
}

void checksum() {
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
