#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7246305032983883683LL;
long long int var_7 = -8939132513229810555LL;
long long int var_8 = -4199071953319159997LL;
long long int var_9 = -4747723461489953762LL;
short var_10 = (short)27992;
short var_12 = (short)11282;
unsigned short var_13 = (unsigned short)44806;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5300556800928346245LL;
short var_22 = (short)-30502;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
