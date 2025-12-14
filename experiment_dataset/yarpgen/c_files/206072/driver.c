#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)91;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 4159657559U;
signed char var_7 = (signed char)98;
unsigned int var_9 = 2967148848U;
unsigned int var_10 = 1724053440U;
signed char var_11 = (signed char)-115;
int zero = 0;
unsigned int var_12 = 1462779089U;
unsigned int var_13 = 221827092U;
unsigned int var_14 = 574397153U;
signed char var_15 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
