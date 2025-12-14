#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8280665912459639656LL;
unsigned short var_4 = (unsigned short)3361;
long long int var_6 = -1131243548573841766LL;
unsigned char var_11 = (unsigned char)243;
long long int var_16 = 2323244397714970807LL;
int zero = 0;
unsigned short var_18 = (unsigned short)24505;
unsigned short var_19 = (unsigned short)1174;
unsigned char var_20 = (unsigned char)251;
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
