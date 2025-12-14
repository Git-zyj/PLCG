#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1071388226;
unsigned long long int var_15 = 1384279471336695562ULL;
long long int var_18 = 1941506972675725305LL;
unsigned char var_19 = (unsigned char)235;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-14572;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
