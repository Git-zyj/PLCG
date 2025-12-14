#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 770374812821555390LL;
long long int var_5 = -6136982688018410987LL;
signed char var_8 = (signed char)-98;
unsigned int var_13 = 1445968349U;
signed char var_14 = (signed char)19;
int zero = 0;
unsigned char var_16 = (unsigned char)67;
unsigned int var_17 = 256464230U;
unsigned char var_18 = (unsigned char)185;
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
