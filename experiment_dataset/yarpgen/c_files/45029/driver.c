#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
signed char var_3 = (signed char)-82;
unsigned char var_4 = (unsigned char)59;
long long int var_6 = -9039693901726677172LL;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_12 = -2554745505732658482LL;
long long int var_13 = -7541595509453634841LL;
short var_14 = (short)22457;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
