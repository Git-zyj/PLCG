#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4292804878U;
signed char var_3 = (signed char)-74;
unsigned long long int var_13 = 14873047924994875013ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)14867;
void init() {
}

void checksum() {
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
