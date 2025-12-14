#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13318894833671415919ULL;
short var_3 = (short)-18634;
short var_5 = (short)-5337;
unsigned long long int var_11 = 2179866088850918183ULL;
int zero = 0;
unsigned long long int var_20 = 17311087703383481117ULL;
unsigned long long int var_21 = 67246952639647544ULL;
short var_22 = (short)-13830;
short var_23 = (short)672;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
