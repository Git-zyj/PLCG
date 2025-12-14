#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 550207999;
unsigned int var_3 = 2929429406U;
unsigned short var_9 = (unsigned short)36660;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 18285656320756015505ULL;
unsigned short var_12 = (unsigned short)45432;
unsigned long long int var_13 = 8115224080246831084ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
