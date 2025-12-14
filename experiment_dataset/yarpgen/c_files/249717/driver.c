#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36447;
short var_1 = (short)26045;
long long int var_2 = -3564565040436736874LL;
unsigned short var_3 = (unsigned short)44352;
int var_4 = 36947777;
unsigned long long int var_5 = 10716585287746808693ULL;
signed char var_7 = (signed char)108;
long long int var_9 = -1299386082050557725LL;
unsigned long long int var_10 = 17271716588684145833ULL;
short var_11 = (short)-5054;
unsigned long long int var_12 = 4308050836485072911ULL;
int var_13 = -1214119667;
unsigned char var_14 = (unsigned char)198;
int zero = 0;
short var_15 = (short)-1936;
signed char var_16 = (signed char)-52;
int var_17 = 1004124138;
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
