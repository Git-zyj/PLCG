#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3548405539203191829ULL;
unsigned char var_6 = (unsigned char)119;
int var_7 = -854273833;
unsigned char var_8 = (unsigned char)4;
unsigned short var_9 = (unsigned short)7280;
_Bool var_10 = (_Bool)0;
long long int var_12 = -1205697546673357676LL;
int zero = 0;
unsigned long long int var_13 = 243021016679906879ULL;
unsigned short var_14 = (unsigned short)46463;
_Bool var_15 = (_Bool)0;
long long int var_16 = -7223410253221435802LL;
signed char var_17 = (signed char)102;
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
