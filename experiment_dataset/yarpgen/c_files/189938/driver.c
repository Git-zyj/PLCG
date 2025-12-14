#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
long long int var_2 = -5927551773473794015LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 17900530828906078510ULL;
short var_11 = (short)4623;
int zero = 0;
int var_14 = 395193206;
unsigned short var_15 = (unsigned short)4481;
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
