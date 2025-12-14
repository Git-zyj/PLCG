#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
short var_2 = (short)29645;
short var_4 = (short)5689;
unsigned int var_6 = 2372400354U;
signed char var_8 = (signed char)2;
long long int var_9 = 3943323795301628054LL;
long long int var_11 = 3240037997684769874LL;
unsigned char var_13 = (unsigned char)185;
int zero = 0;
short var_14 = (short)15730;
signed char var_15 = (signed char)63;
unsigned char var_16 = (unsigned char)191;
unsigned char var_17 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
