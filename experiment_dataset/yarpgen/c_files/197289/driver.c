#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24105;
long long int var_3 = 973884345248968181LL;
unsigned short var_5 = (unsigned short)54615;
long long int var_6 = 6326495068096975143LL;
long long int var_8 = -6796448464401720534LL;
long long int var_11 = -7727047586119931866LL;
int zero = 0;
long long int var_12 = 3971490944079875711LL;
long long int var_13 = 8395204514231080984LL;
unsigned short var_14 = (unsigned short)37616;
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
