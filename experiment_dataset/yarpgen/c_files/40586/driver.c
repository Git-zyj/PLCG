#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)70;
unsigned short var_6 = (unsigned short)20824;
signed char var_7 = (signed char)26;
unsigned int var_9 = 1684787151U;
int zero = 0;
unsigned long long int var_10 = 13813558473608935395ULL;
long long int var_11 = -7689683418447764577LL;
signed char var_12 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
