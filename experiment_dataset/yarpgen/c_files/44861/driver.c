#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1522427516193002388LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)6599;
unsigned short var_5 = (unsigned short)47216;
signed char var_6 = (signed char)-81;
unsigned int var_8 = 1433679505U;
signed char var_9 = (signed char)13;
unsigned char var_10 = (unsigned char)202;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-109;
int var_14 = 475787623;
int var_15 = 1192471850;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -2696880978029420045LL;
unsigned char var_22 = (unsigned char)201;
short var_23 = (short)-6347;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
