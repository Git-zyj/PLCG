#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14968065570149226190ULL;
int var_3 = 1942991293;
unsigned short var_4 = (unsigned short)14219;
int var_7 = 1732393591;
unsigned int var_9 = 1855021249U;
unsigned long long int var_14 = 6122730530305844701ULL;
int var_15 = -1573748633;
int zero = 0;
long long int var_16 = 645793542064331041LL;
int var_17 = 412467387;
long long int var_18 = -1091579246157369335LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
