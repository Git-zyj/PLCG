#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1084203675743672257ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_9 = 1289963391203976793ULL;
int var_10 = -1504099995;
unsigned short var_11 = (unsigned short)49953;
int zero = 0;
unsigned long long int var_14 = 1898279458349456881ULL;
long long int var_15 = 2626623859058963735LL;
long long int var_16 = -7536453235430867042LL;
unsigned char var_17 = (unsigned char)208;
long long int var_18 = 8706852917879011479LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
