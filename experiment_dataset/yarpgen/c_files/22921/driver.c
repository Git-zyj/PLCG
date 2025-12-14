#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3115520194U;
unsigned int var_9 = 508711747U;
unsigned int var_10 = 3863212060U;
signed char var_12 = (signed char)-69;
int zero = 0;
signed char var_14 = (signed char)-15;
unsigned int var_15 = 1044779847U;
unsigned int var_16 = 1438320696U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
