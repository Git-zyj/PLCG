#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -261318116;
long long int var_4 = -4795413273650421788LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3302801383U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7930394326493529810ULL;
int var_11 = -761099936;
long long int var_13 = -2535450803769324489LL;
int zero = 0;
unsigned int var_14 = 495704592U;
unsigned long long int var_15 = 12207653603411916282ULL;
unsigned short var_16 = (unsigned short)35008;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
