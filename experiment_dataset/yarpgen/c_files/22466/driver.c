#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 10705849634489407713ULL;
_Bool var_12 = (_Bool)0;
short var_14 = (short)5907;
int zero = 0;
unsigned long long int var_15 = 13188379440922102125ULL;
short var_16 = (short)-29059;
long long int var_17 = -550364789975366674LL;
void init() {
}

void checksum() {
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
