#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 731109105139846144ULL;
unsigned int var_1 = 3104489872U;
unsigned short var_2 = (unsigned short)45104;
unsigned char var_3 = (unsigned char)206;
short var_5 = (short)135;
unsigned short var_6 = (unsigned short)36720;
long long int var_7 = -8127888717696627062LL;
unsigned char var_8 = (unsigned char)156;
unsigned short var_9 = (unsigned short)53095;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)62522;
signed char var_12 = (signed char)35;
_Bool var_13 = (_Bool)0;
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
