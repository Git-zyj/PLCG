#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3336054545853501206LL;
unsigned short var_5 = (unsigned short)50620;
unsigned long long int var_8 = 12799678609954214927ULL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 6625656203356775752LL;
signed char var_14 = (signed char)-16;
int zero = 0;
long long int var_15 = 2613602041976627205LL;
unsigned long long int var_16 = 17653022322633437761ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
