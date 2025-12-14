#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3404854048U;
signed char var_3 = (signed char)-118;
int var_4 = 1108136794;
long long int var_7 = -7215610879147208657LL;
unsigned int var_8 = 1311581525U;
int zero = 0;
long long int var_20 = 7973878718136889156LL;
unsigned long long int var_21 = 18247156658226098111ULL;
unsigned long long int var_22 = 6485106409995167976ULL;
long long int var_23 = 8230623931199392581LL;
short var_24 = (short)32508;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
