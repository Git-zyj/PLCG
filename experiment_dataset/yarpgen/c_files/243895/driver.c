#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)97;
long long int var_5 = -6634382853297430644LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 15461586388068668155ULL;
unsigned int var_13 = 16007174U;
signed char var_14 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
