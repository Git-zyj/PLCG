#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15578052472136097026ULL;
unsigned short var_2 = (unsigned short)28937;
unsigned short var_7 = (unsigned short)65137;
unsigned long long int var_8 = 1573130471542640191ULL;
unsigned short var_9 = (unsigned short)62168;
int zero = 0;
unsigned int var_11 = 3191660665U;
unsigned int var_12 = 3280899041U;
unsigned short var_13 = (unsigned short)10628;
unsigned short var_14 = (unsigned short)41505;
unsigned int var_15 = 2496988231U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
