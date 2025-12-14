#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2718727362022106713LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3018554064U;
int var_6 = 16437377;
long long int var_9 = -6962259970132162082LL;
unsigned long long int var_10 = 16916223026917939984ULL;
unsigned char var_12 = (unsigned char)220;
int zero = 0;
long long int var_13 = -6030958897567298064LL;
short var_14 = (short)-5877;
long long int var_15 = -3318559831394529663LL;
void init() {
}

void checksum() {
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
