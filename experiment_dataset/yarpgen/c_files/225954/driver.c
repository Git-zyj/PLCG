#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 988057288;
short var_3 = (short)1540;
unsigned short var_4 = (unsigned short)65274;
long long int var_7 = 6805375247349816713LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 16172693024274164824ULL;
int zero = 0;
signed char var_13 = (signed char)21;
unsigned short var_14 = (unsigned short)26477;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
