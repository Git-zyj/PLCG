#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 9487259371265430877ULL;
signed char var_5 = (signed char)34;
signed char var_6 = (signed char)-77;
int var_9 = 761381798;
int zero = 0;
short var_10 = (short)1821;
short var_11 = (short)14588;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
