#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
signed char var_1 = (signed char)32;
long long int var_2 = 3568519084847951315LL;
int var_3 = -1781574005;
int var_5 = 1628118600;
long long int var_6 = 6503555667711995430LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)9937;
int var_9 = 1726719880;
long long int var_10 = -917523651332058095LL;
unsigned char var_11 = (unsigned char)50;
int zero = 0;
unsigned char var_12 = (unsigned char)168;
signed char var_13 = (signed char)-74;
short var_14 = (short)-14325;
short var_15 = (short)24942;
void init() {
}

void checksum() {
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
