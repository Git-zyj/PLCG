#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37184;
long long int var_8 = -1112261531976945752LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_15 = 14945051626244201610ULL;
int zero = 0;
signed char var_18 = (signed char)-51;
signed char var_19 = (signed char)-51;
void init() {
}

void checksum() {
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
