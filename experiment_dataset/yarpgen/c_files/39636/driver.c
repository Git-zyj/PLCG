#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
long long int var_7 = 6820573687882941674LL;
short var_9 = (short)27981;
short var_10 = (short)20084;
unsigned char var_13 = (unsigned char)18;
signed char var_15 = (signed char)107;
int var_16 = -1525915002;
signed char var_17 = (signed char)37;
int zero = 0;
short var_18 = (short)-7373;
int var_19 = 1977690944;
unsigned short var_20 = (unsigned short)29843;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
