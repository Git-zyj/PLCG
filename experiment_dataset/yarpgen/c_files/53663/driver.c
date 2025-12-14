#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)227;
long long int var_4 = -606713906460560460LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -2505800988657899170LL;
long long int var_13 = 2922416229828739143LL;
int zero = 0;
long long int var_14 = 8989163861782193845LL;
unsigned int var_15 = 2827346238U;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7269603456498490364LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
