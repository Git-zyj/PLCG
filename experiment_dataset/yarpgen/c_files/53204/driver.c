#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
unsigned char var_1 = (unsigned char)177;
signed char var_2 = (signed char)75;
int var_3 = -1577392487;
short var_4 = (short)-16474;
signed char var_6 = (signed char)93;
signed char var_7 = (signed char)-118;
unsigned short var_8 = (unsigned short)56974;
int var_9 = -84097254;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1947679744;
unsigned char var_12 = (unsigned char)238;
long long int var_13 = -2501818507558163559LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
