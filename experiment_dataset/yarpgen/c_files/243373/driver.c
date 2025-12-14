#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
unsigned long long int var_6 = 10947658847563836666ULL;
signed char var_7 = (signed char)-53;
unsigned short var_9 = (unsigned short)7816;
int zero = 0;
int var_18 = 1205612424;
unsigned short var_19 = (unsigned short)53022;
signed char var_20 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
