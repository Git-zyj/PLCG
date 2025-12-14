#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)36;
long long int var_7 = -1499343827080435129LL;
unsigned char var_9 = (unsigned char)77;
unsigned long long int var_11 = 16174034980807882145ULL;
int zero = 0;
unsigned int var_13 = 3343892717U;
short var_14 = (short)18492;
int var_15 = 354427996;
short var_16 = (short)13106;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
