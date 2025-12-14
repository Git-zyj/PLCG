#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4971;
unsigned char var_7 = (unsigned char)134;
unsigned long long int var_8 = 10838830640528079806ULL;
unsigned long long int var_11 = 15086596690174049557ULL;
int zero = 0;
int var_15 = -1131978160;
unsigned long long int var_16 = 17633936508026253419ULL;
unsigned long long int var_17 = 15048156066697644552ULL;
short var_18 = (short)22238;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
