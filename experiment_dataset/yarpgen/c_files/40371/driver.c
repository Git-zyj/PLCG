#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1427025430432215727LL;
int var_2 = -2100442261;
long long int var_4 = -9181507814063994347LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-32248;
int zero = 0;
int var_10 = 886245734;
signed char var_11 = (signed char)0;
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
