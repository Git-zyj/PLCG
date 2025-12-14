#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -8470166157538253491LL;
long long int var_10 = 4188941573447343968LL;
short var_11 = (short)-18664;
short var_12 = (short)1781;
long long int var_14 = -8437617121728585627LL;
int zero = 0;
signed char var_18 = (signed char)123;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 8026184685218265106ULL;
unsigned short var_21 = (unsigned short)45021;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
