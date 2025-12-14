#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4235650168U;
long long int var_1 = 1179748679112951993LL;
unsigned char var_3 = (unsigned char)117;
unsigned short var_4 = (unsigned short)1867;
short var_6 = (short)438;
_Bool var_7 = (_Bool)1;
int var_8 = 1629036322;
long long int var_9 = 7495598860254025507LL;
int zero = 0;
unsigned char var_11 = (unsigned char)189;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
