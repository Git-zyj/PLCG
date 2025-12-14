#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31820;
unsigned short var_4 = (unsigned short)55283;
unsigned short var_8 = (unsigned short)57385;
int zero = 0;
unsigned long long int var_14 = 16212989892202258684ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)42348;
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
