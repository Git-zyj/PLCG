#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
long long int var_1 = 5465303969171593533LL;
signed char var_3 = (signed char)101;
long long int var_5 = 4674657834472046859LL;
short var_8 = (short)-3467;
unsigned char var_9 = (unsigned char)168;
long long int var_13 = -1743293951795496551LL;
int zero = 0;
short var_15 = (short)31441;
_Bool var_16 = (_Bool)0;
long long int var_17 = -9118581092039476045LL;
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
