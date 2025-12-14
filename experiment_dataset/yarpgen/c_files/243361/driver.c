#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-28351;
long long int var_6 = -3239120451602286885LL;
unsigned long long int var_7 = 1376475879932409881ULL;
unsigned long long int var_9 = 6496661945550592393ULL;
unsigned char var_12 = (unsigned char)195;
short var_13 = (short)-25715;
long long int var_14 = -8345239758878024838LL;
int zero = 0;
short var_18 = (short)25320;
short var_19 = (short)22856;
unsigned short var_20 = (unsigned short)16052;
unsigned long long int var_21 = 5113014379017524550ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
