#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30809;
signed char var_1 = (signed char)68;
unsigned long long int var_2 = 3257873094083092558ULL;
signed char var_5 = (signed char)-70;
unsigned long long int var_9 = 2169595168216941299ULL;
unsigned long long int var_11 = 15916527742379327291ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 8417712813186902705ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
