#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1730987184075661763LL;
short var_3 = (short)20913;
unsigned short var_5 = (unsigned short)23010;
long long int var_10 = 1435433571418673629LL;
short var_11 = (short)31057;
long long int var_12 = -2199893300369675170LL;
int zero = 0;
long long int var_20 = -7529196505426590231LL;
long long int var_21 = -8125243748481586848LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = 2704867016869632551LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
