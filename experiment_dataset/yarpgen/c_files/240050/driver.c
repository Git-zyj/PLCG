#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11973793929950184791ULL;
int var_5 = 1465797452;
unsigned short var_7 = (unsigned short)59710;
_Bool var_8 = (_Bool)1;
long long int var_9 = -6088609518027206614LL;
int zero = 0;
short var_10 = (short)-29980;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
