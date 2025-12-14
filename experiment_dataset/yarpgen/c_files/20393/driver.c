#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 3599242684315379113LL;
unsigned long long int var_9 = 13226657515931894014ULL;
unsigned short var_15 = (unsigned short)44670;
int zero = 0;
unsigned long long int var_16 = 3151544650027782500ULL;
signed char var_17 = (signed char)77;
unsigned short var_18 = (unsigned short)40648;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
