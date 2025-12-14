#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)208;
unsigned short var_2 = (unsigned short)20381;
unsigned int var_3 = 3744549323U;
unsigned char var_6 = (unsigned char)148;
unsigned long long int var_10 = 17889601110959316996ULL;
unsigned long long int var_13 = 9368378727724916112ULL;
short var_14 = (short)-25829;
unsigned char var_18 = (unsigned char)192;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 200926350;
int var_21 = 1046217926;
long long int var_22 = 4034237490867138633LL;
unsigned short var_23 = (unsigned short)56015;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
