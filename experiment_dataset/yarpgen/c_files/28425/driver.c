#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)41170;
unsigned short var_10 = (unsigned short)6705;
unsigned long long int var_14 = 3070636611869413954ULL;
unsigned long long int var_18 = 5562234972944999310ULL;
int zero = 0;
short var_19 = (short)-12647;
int var_20 = 1216734820;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
