#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)2630;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_20 = 2082759344;
unsigned int var_21 = 2007453469U;
long long int var_22 = 2106870884128866678LL;
unsigned long long int var_23 = 9473659168627377207ULL;
int var_24 = -834254499;
unsigned short var_25 = (unsigned short)23376;
signed char var_26 = (signed char)35;
int var_27 = -1051776889;
int var_28 = -1961677981;
int var_29 = -1616076001;
unsigned long long int var_30 = 17365488333610207230ULL;
unsigned long long int var_31 = 17052715173926103068ULL;
unsigned char var_32 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
