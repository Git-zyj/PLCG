#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31364;
unsigned long long int var_2 = 7586500095006608959ULL;
long long int var_7 = 4067430179321507971LL;
unsigned char var_11 = (unsigned char)45;
unsigned int var_12 = 495945130U;
int zero = 0;
short var_18 = (short)5302;
unsigned long long int var_19 = 14821562726874604386ULL;
_Bool var_20 = (_Bool)0;
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
