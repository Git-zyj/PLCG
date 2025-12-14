#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
int var_2 = -1343199957;
_Bool var_4 = (_Bool)0;
int var_5 = -1195376199;
unsigned long long int var_6 = 10244250170719201348ULL;
unsigned int var_8 = 1169637862U;
int zero = 0;
unsigned long long int var_10 = 5098501240257684430ULL;
signed char var_11 = (signed char)102;
_Bool var_12 = (_Bool)0;
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
