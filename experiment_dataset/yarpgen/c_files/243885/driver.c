#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -842882550;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 14194955103171251959ULL;
unsigned long long int var_14 = 14425023492562269868ULL;
int zero = 0;
signed char var_16 = (signed char)-40;
short var_17 = (short)6990;
long long int var_18 = -1914414545715884669LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
