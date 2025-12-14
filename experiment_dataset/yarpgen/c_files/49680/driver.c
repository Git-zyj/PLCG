#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13785257805404934729ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 503773878011527005ULL;
unsigned long long int var_7 = 14902483531408446394ULL;
unsigned int var_8 = 1676406625U;
unsigned int var_9 = 2294010117U;
unsigned long long int var_10 = 15386502926547681004ULL;
int zero = 0;
unsigned long long int var_13 = 4134208839668947545ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 3237674302825105150ULL;
unsigned long long int var_16 = 10930995368813301274ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)2942;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
