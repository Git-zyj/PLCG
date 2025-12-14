#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)121;
unsigned long long int var_11 = 16262022125434363185ULL;
int var_12 = 822994816;
int var_13 = 663900320;
int zero = 0;
long long int var_18 = -3833406967202345282LL;
long long int var_19 = 4067794312859395377LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -1380564727830980541LL;
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
