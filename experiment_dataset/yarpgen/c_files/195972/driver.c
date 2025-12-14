#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2931048266179138109ULL;
unsigned int var_3 = 3663490814U;
unsigned char var_4 = (unsigned char)138;
long long int var_6 = -3055331781071783268LL;
long long int var_7 = -1582110280869469420LL;
short var_9 = (short)29411;
unsigned int var_10 = 4082139172U;
int zero = 0;
unsigned int var_12 = 821334592U;
unsigned short var_13 = (unsigned short)21799;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
