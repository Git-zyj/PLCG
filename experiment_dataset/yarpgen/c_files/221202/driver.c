#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7471564547926691566LL;
signed char var_3 = (signed char)-40;
int var_5 = 893739920;
short var_6 = (short)-19982;
signed char var_7 = (signed char)-54;
long long int var_8 = -6129034979797981461LL;
long long int var_9 = 3992503683950505125LL;
signed char var_10 = (signed char)37;
long long int var_11 = -937667666842391138LL;
unsigned long long int var_13 = 16360336581967534922ULL;
int zero = 0;
unsigned int var_14 = 2738949388U;
signed char var_15 = (signed char)20;
unsigned short var_16 = (unsigned short)23350;
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
