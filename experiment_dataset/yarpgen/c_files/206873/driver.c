#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
long long int var_2 = 4586205022826435550LL;
unsigned long long int var_11 = 126491449168127712ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-15;
unsigned short var_15 = (unsigned short)15502;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
