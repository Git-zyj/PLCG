#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)89;
unsigned char var_2 = (unsigned char)178;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)111;
long long int var_9 = 5028192005436262071LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 599000240U;
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
