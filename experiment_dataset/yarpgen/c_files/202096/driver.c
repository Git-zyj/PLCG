#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned char var_1 = (unsigned char)210;
signed char var_2 = (signed char)60;
long long int var_3 = 1054361092840905794LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 410291366012781280ULL;
unsigned char var_10 = (unsigned char)243;
short var_12 = (short)-4134;
int zero = 0;
short var_14 = (short)-12509;
short var_15 = (short)29289;
long long int var_16 = 6005596403666749769LL;
unsigned long long int var_17 = 188640564963752986ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
