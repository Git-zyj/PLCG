#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1539218183;
long long int var_4 = 3475179378954151831LL;
unsigned long long int var_5 = 15407396662109163282ULL;
unsigned long long int var_6 = 13664439590103161524ULL;
unsigned long long int var_8 = 14876187194097474894ULL;
signed char var_9 = (signed char)-39;
int zero = 0;
unsigned long long int var_10 = 7017711121113765735ULL;
unsigned long long int var_11 = 16151762191508628964ULL;
signed char var_12 = (signed char)114;
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
