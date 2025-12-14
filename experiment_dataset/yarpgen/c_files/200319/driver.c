#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6801694959141584027LL;
int var_3 = -602299145;
unsigned int var_4 = 454042607U;
unsigned short var_5 = (unsigned short)28226;
unsigned char var_6 = (unsigned char)70;
int zero = 0;
unsigned int var_11 = 3765306934U;
_Bool var_12 = (_Bool)0;
int var_13 = 295965318;
unsigned short var_14 = (unsigned short)9527;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
