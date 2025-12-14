#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned short var_1 = (unsigned short)26091;
int var_2 = 1554452508;
unsigned char var_4 = (unsigned char)156;
unsigned char var_7 = (unsigned char)193;
unsigned char var_9 = (unsigned char)56;
unsigned short var_10 = (unsigned short)54870;
unsigned short var_16 = (unsigned short)6064;
unsigned short var_17 = (unsigned short)26465;
int zero = 0;
int var_20 = -926379423;
_Bool var_21 = (_Bool)1;
long long int var_22 = -644493499377965289LL;
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
