#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1639168777U;
unsigned int var_1 = 1089506278U;
long long int var_5 = 9041906862947246278LL;
signed char var_11 = (signed char)-25;
int zero = 0;
unsigned int var_12 = 3905724909U;
signed char var_13 = (signed char)39;
_Bool var_14 = (_Bool)0;
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
