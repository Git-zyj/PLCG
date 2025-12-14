#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
unsigned char var_1 = (unsigned char)169;
signed char var_3 = (signed char)-58;
long long int var_7 = -5641635869043711943LL;
int var_8 = 1768153617;
short var_9 = (short)8351;
short var_10 = (short)16654;
unsigned int var_12 = 1206878426U;
int zero = 0;
unsigned char var_14 = (unsigned char)195;
unsigned short var_15 = (unsigned short)23142;
int var_16 = -634662198;
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
