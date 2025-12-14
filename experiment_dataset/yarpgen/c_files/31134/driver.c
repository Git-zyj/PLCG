#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4029340856U;
long long int var_2 = 3957812401012827307LL;
unsigned int var_4 = 887380181U;
short var_7 = (short)-6036;
long long int var_8 = -7173755780682146988LL;
unsigned int var_9 = 1067771459U;
int zero = 0;
signed char var_13 = (signed char)71;
unsigned short var_14 = (unsigned short)49609;
unsigned long long int var_15 = 2886689407175609347ULL;
short var_16 = (short)28262;
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
