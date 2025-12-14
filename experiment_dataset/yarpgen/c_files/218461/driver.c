#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5480544337074019559LL;
short var_3 = (short)-11916;
_Bool var_4 = (_Bool)0;
int var_9 = 1639785645;
signed char var_10 = (signed char)22;
int zero = 0;
unsigned long long int var_11 = 15818800560001607340ULL;
short var_12 = (short)-18212;
unsigned char var_13 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
