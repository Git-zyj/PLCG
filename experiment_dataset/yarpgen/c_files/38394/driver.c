#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5375232102565359213LL;
unsigned short var_4 = (unsigned short)43400;
unsigned long long int var_6 = 6169605764037820157ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
short var_10 = (short)-479;
short var_11 = (short)29779;
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
