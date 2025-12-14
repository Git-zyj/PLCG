#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2144306416;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3458714781U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1878185461U;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 872826479221117129LL;
long long int var_11 = 1380809509813967470LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -5868443369730436268LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
