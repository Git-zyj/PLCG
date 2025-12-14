#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16696887350656434920ULL;
signed char var_6 = (signed char)-73;
unsigned char var_8 = (unsigned char)146;
signed char var_9 = (signed char)-31;
unsigned long long int var_10 = 13582989584463450260ULL;
unsigned short var_11 = (unsigned short)9570;
unsigned long long int var_12 = 11625774583769300173ULL;
unsigned long long int var_13 = 4931378306469618682ULL;
unsigned long long int var_18 = 16987938002060699283ULL;
int var_19 = -248868158;
int zero = 0;
unsigned char var_20 = (unsigned char)24;
short var_21 = (short)519;
unsigned short var_22 = (unsigned short)50322;
unsigned long long int var_23 = 14565704771182894630ULL;
unsigned int var_24 = 1081504576U;
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
