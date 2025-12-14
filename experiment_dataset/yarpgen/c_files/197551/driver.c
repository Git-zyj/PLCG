#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)28;
signed char var_6 = (signed char)-68;
long long int var_8 = 5110396445704268737LL;
long long int var_9 = 1068491203517112255LL;
short var_10 = (short)5479;
long long int var_11 = -979775379027214634LL;
int zero = 0;
signed char var_18 = (signed char)-54;
long long int var_19 = -9062356392385176629LL;
unsigned char var_20 = (unsigned char)61;
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
