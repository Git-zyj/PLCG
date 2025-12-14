#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9741;
short var_1 = (short)-17698;
signed char var_2 = (signed char)124;
short var_3 = (short)-11572;
short var_8 = (short)-30457;
int zero = 0;
unsigned long long int var_15 = 12505991670276077169ULL;
signed char var_16 = (signed char)-38;
int var_17 = 1618628500;
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
