#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2317;
short var_2 = (short)1516;
unsigned short var_3 = (unsigned short)3015;
unsigned short var_5 = (unsigned short)38538;
short var_6 = (short)12983;
short var_7 = (short)-6279;
unsigned long long int var_8 = 13582804867890186160ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)-21322;
short var_11 = (short)-25002;
short var_12 = (short)-326;
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
