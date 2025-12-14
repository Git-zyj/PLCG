#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9191227557005172724LL;
unsigned short var_4 = (unsigned short)20899;
_Bool var_10 = (_Bool)0;
short var_13 = (short)-26991;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -1700906818;
short var_16 = (short)-31939;
signed char var_17 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
