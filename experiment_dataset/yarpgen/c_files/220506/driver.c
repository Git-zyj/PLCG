#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 460291051651490157LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1363198218766994967LL;
unsigned int var_8 = 4085500534U;
short var_9 = (short)7275;
long long int var_10 = 8525045314019377149LL;
unsigned short var_11 = (unsigned short)44761;
unsigned int var_12 = 430112266U;
int zero = 0;
unsigned int var_15 = 3499240969U;
unsigned long long int var_16 = 1804879485652935697ULL;
short var_17 = (short)-14722;
unsigned int var_18 = 4032621507U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
