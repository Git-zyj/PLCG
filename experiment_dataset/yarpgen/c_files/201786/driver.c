#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16702360596168607201ULL;
short var_3 = (short)25643;
unsigned char var_4 = (unsigned char)182;
unsigned short var_7 = (unsigned short)18202;
long long int var_8 = 1024455516336206760LL;
unsigned short var_9 = (unsigned short)64659;
long long int var_10 = -4100575038375076757LL;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)111;
short var_14 = (short)13688;
signed char var_15 = (signed char)-86;
unsigned char var_16 = (unsigned char)187;
int zero = 0;
unsigned char var_17 = (unsigned char)186;
int var_18 = -1989806443;
unsigned char var_19 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
