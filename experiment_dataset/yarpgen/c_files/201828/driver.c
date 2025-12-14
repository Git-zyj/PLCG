#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
_Bool var_1 = (_Bool)0;
unsigned short var_9 = (unsigned short)10290;
int zero = 0;
unsigned long long int var_14 = 982569849342336822ULL;
short var_15 = (short)27223;
short var_16 = (short)29057;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
