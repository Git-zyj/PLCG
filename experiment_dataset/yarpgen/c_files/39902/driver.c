#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3789814980U;
short var_1 = (short)-26110;
long long int var_2 = 5649092197976006321LL;
unsigned int var_3 = 2850105784U;
int var_4 = 1356693038;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)253;
int zero = 0;
long long int var_10 = 2759546104531346226LL;
long long int var_11 = -5511621116264715506LL;
unsigned int var_12 = 2482004516U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
