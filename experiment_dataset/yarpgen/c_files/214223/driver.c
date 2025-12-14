#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7429262242898395272ULL;
unsigned long long int var_4 = 12094053490103283305ULL;
long long int var_5 = -364996767947462165LL;
unsigned char var_8 = (unsigned char)229;
unsigned long long int var_9 = 15407050835770146446ULL;
unsigned int var_11 = 2754786419U;
signed char var_12 = (signed char)-115;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)53;
int zero = 0;
unsigned short var_18 = (unsigned short)37645;
short var_19 = (short)10098;
_Bool var_20 = (_Bool)1;
short var_21 = (short)7045;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
