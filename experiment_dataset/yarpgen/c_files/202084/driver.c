#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
unsigned int var_1 = 1596831610U;
int var_2 = 1303494907;
int var_4 = -2051010942;
short var_5 = (short)22032;
int var_6 = 182408389;
int var_7 = 1907752490;
int var_8 = 1767884220;
short var_9 = (short)27107;
int var_10 = -1838985072;
int var_11 = -1297008713;
long long int var_13 = -7851045681812582344LL;
int var_14 = -1634172181;
int zero = 0;
int var_15 = -1753735715;
short var_16 = (short)10314;
unsigned char var_17 = (unsigned char)104;
unsigned char var_18 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
