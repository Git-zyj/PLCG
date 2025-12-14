#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4520752146068974120ULL;
unsigned char var_4 = (unsigned char)153;
long long int var_6 = 6563148920489711454LL;
long long int var_9 = 826548625434439122LL;
short var_11 = (short)-17690;
unsigned long long int var_14 = 8369835642750742483ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 6580380821051946596ULL;
signed char var_18 = (signed char)-108;
long long int var_19 = -1016429380406769577LL;
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
