#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6478;
long long int var_2 = 3197945006593265914LL;
long long int var_5 = -2879184420911225135LL;
short var_7 = (short)17279;
unsigned char var_9 = (unsigned char)196;
int zero = 0;
long long int var_13 = -7187740376141856250LL;
unsigned short var_14 = (unsigned short)28808;
unsigned int var_15 = 346421301U;
unsigned char var_16 = (unsigned char)226;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
