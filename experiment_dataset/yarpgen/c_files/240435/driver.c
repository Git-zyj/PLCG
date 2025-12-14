#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8153104588146206319LL;
int var_1 = 488659336;
int var_2 = 683173336;
int var_3 = 1852097698;
unsigned short var_4 = (unsigned short)41277;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)240;
long long int var_9 = 7352093496064275956LL;
unsigned long long int var_10 = 2336496244191550688ULL;
long long int var_12 = 2503637719695160238LL;
short var_14 = (short)23232;
int zero = 0;
unsigned long long int var_15 = 12730593300132205581ULL;
signed char var_16 = (signed char)23;
unsigned char var_17 = (unsigned char)52;
unsigned long long int var_18 = 3609744784273626566ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
