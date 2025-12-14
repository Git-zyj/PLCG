#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8113834169748665119LL;
unsigned long long int var_2 = 8476670118005286875ULL;
signed char var_3 = (signed char)60;
short var_4 = (short)-4108;
short var_5 = (short)14619;
long long int var_6 = 3546084580113950343LL;
short var_9 = (short)-2500;
int zero = 0;
short var_10 = (short)-10211;
long long int var_11 = 2292266053455410994LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
