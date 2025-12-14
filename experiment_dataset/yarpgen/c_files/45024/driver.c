#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 842897272;
unsigned int var_3 = 3002635114U;
unsigned short var_4 = (unsigned short)41951;
long long int var_5 = -6745227944424663815LL;
unsigned char var_6 = (unsigned char)177;
long long int var_7 = -3052780339040474204LL;
unsigned int var_8 = 571251665U;
signed char var_9 = (signed char)80;
unsigned char var_10 = (unsigned char)129;
_Bool var_11 = (_Bool)1;
long long int var_13 = 5599176220658414075LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-26842;
unsigned long long int var_18 = 4523059445814640877ULL;
unsigned int var_19 = 1999807487U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
