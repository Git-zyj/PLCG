#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7372548817339940791LL;
short var_4 = (short)27229;
unsigned long long int var_5 = 17709505221772191878ULL;
long long int var_11 = 949980577107556599LL;
unsigned short var_12 = (unsigned short)32141;
unsigned long long int var_15 = 12923335193044311899ULL;
signed char var_18 = (signed char)119;
int zero = 0;
signed char var_19 = (signed char)72;
signed char var_20 = (signed char)120;
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
