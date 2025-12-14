#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1728904217;
unsigned long long int var_9 = 13527280973150952331ULL;
signed char var_14 = (signed char)74;
int zero = 0;
signed char var_16 = (signed char)-70;
unsigned long long int var_17 = 11664288482313807085ULL;
short var_18 = (short)-31704;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
