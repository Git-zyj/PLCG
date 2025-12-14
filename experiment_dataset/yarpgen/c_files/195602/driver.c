#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7000080913638262074LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)30859;
unsigned long long int var_9 = 10077590314820834531ULL;
unsigned short var_10 = (unsigned short)22010;
int zero = 0;
unsigned int var_13 = 1574616900U;
signed char var_14 = (signed char)38;
signed char var_15 = (signed char)-11;
unsigned long long int var_16 = 16862635203098323552ULL;
unsigned char var_17 = (unsigned char)137;
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
