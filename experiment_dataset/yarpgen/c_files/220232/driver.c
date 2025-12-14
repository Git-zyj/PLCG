#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)170;
short var_3 = (short)-1248;
short var_4 = (short)-16913;
unsigned short var_8 = (unsigned short)60424;
short var_10 = (short)23922;
unsigned long long int var_14 = 13027906083807644962ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)53083;
unsigned short var_21 = (unsigned short)22278;
short var_22 = (short)17989;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
