#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1373056771078473871LL;
short var_4 = (short)-25224;
long long int var_10 = 8572327538473866132LL;
short var_11 = (short)-1689;
unsigned long long int var_13 = 9934924051595790198ULL;
signed char var_14 = (signed char)27;
int zero = 0;
long long int var_19 = 3147264238745141442LL;
unsigned short var_20 = (unsigned short)15189;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
