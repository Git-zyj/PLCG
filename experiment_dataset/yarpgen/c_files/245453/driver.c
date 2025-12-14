#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5467;
int var_1 = 2058841763;
unsigned int var_3 = 1979977372U;
unsigned long long int var_4 = 4976273158187951358ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_16 = (unsigned char)127;
int zero = 0;
unsigned char var_18 = (unsigned char)51;
unsigned int var_19 = 1284832577U;
unsigned short var_20 = (unsigned short)62475;
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
