#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18297580386929624659ULL;
int var_3 = -2029290960;
long long int var_5 = -6729405270640901826LL;
unsigned int var_6 = 4169060629U;
long long int var_7 = 5208408123049574274LL;
long long int var_8 = -584073910295199193LL;
long long int var_9 = -8594661476138751224LL;
_Bool var_11 = (_Bool)1;
int var_14 = 654445311;
int zero = 0;
short var_15 = (short)-897;
signed char var_16 = (signed char)-76;
unsigned char var_17 = (unsigned char)106;
long long int var_18 = 4738848956179570229LL;
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
