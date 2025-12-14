#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5483153817311281317ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)59;
int var_10 = -81728758;
short var_11 = (short)-2973;
unsigned int var_12 = 4186385165U;
long long int var_13 = -5100555882063777065LL;
int zero = 0;
unsigned long long int var_14 = 14026337013224206789ULL;
unsigned long long int var_15 = 13474862129011877924ULL;
unsigned int var_16 = 996251721U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
