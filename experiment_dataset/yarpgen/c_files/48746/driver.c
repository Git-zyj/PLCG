#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
unsigned long long int var_2 = 10798068526578340080ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 8628600180280294881LL;
signed char var_9 = (signed char)47;
unsigned short var_10 = (unsigned short)44650;
int zero = 0;
unsigned short var_12 = (unsigned short)32877;
short var_13 = (short)16957;
short var_14 = (short)-5850;
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
