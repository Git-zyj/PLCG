#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6587941788194517565LL;
long long int var_6 = 8365002491910513411LL;
unsigned short var_9 = (unsigned short)5159;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 294346758140931989LL;
signed char var_14 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
