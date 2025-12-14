#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_7 = 1713321215U;
unsigned long long int var_9 = 16487936210551144146ULL;
unsigned int var_13 = 1579208090U;
int var_17 = -1705402827;
int zero = 0;
unsigned long long int var_18 = 3389744744839832104ULL;
short var_19 = (short)5408;
unsigned char var_20 = (unsigned char)235;
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
