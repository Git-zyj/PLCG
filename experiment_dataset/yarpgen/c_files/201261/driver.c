#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
long long int var_7 = 7966372672066164717LL;
unsigned char var_8 = (unsigned char)194;
unsigned char var_9 = (unsigned char)94;
int zero = 0;
unsigned char var_15 = (unsigned char)141;
long long int var_16 = 6875756007534418722LL;
long long int var_17 = 4885417200455669199LL;
void init() {
}

void checksum() {
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
