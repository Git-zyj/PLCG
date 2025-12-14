#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-9;
unsigned short var_7 = (unsigned short)7431;
unsigned long long int var_9 = 4761068662358318330ULL;
long long int var_12 = 5604235007615066000LL;
unsigned long long int var_15 = 14261191155083468115ULL;
int zero = 0;
unsigned long long int var_17 = 732140368627124046ULL;
unsigned long long int var_18 = 6320249231791401779ULL;
unsigned int var_19 = 3298372224U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
