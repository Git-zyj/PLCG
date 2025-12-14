#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)200;
short var_9 = (short)-16803;
_Bool var_10 = (_Bool)0;
_Bool var_15 = (_Bool)0;
short var_18 = (short)-23982;
int zero = 0;
int var_19 = -1309329664;
long long int var_20 = -6895617154920477631LL;
void init() {
}

void checksum() {
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
