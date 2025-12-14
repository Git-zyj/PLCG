#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
unsigned int var_1 = 1379859309U;
signed char var_4 = (signed char)120;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-22791;
unsigned short var_8 = (unsigned short)18885;
unsigned short var_9 = (unsigned short)1584;
unsigned long long int var_10 = 15985199883505278439ULL;
int zero = 0;
short var_13 = (short)6161;
unsigned int var_14 = 710228448U;
long long int var_15 = 6494112130347582624LL;
unsigned char var_16 = (unsigned char)220;
long long int var_17 = 6721828818573716336LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
