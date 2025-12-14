#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 873009188;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 3921121662U;
unsigned int var_9 = 4265795907U;
unsigned char var_11 = (unsigned char)171;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 12140427215381375400ULL;
long long int var_14 = -4638394355497925594LL;
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
