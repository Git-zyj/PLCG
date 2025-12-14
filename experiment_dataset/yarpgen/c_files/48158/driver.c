#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8897001607540440964LL;
unsigned short var_10 = (unsigned short)13617;
long long int var_14 = -3489028372087238171LL;
long long int var_17 = 8316415686129473673LL;
int zero = 0;
long long int var_18 = -8073598273278900668LL;
int var_19 = 1660057624;
long long int var_20 = 4348820451980044937LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
