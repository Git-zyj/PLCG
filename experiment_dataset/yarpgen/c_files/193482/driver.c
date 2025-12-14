#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)72;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)56208;
short var_11 = (short)26700;
signed char var_13 = (signed char)121;
int zero = 0;
short var_15 = (short)25085;
signed char var_16 = (signed char)-57;
void init() {
}

void checksum() {
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
