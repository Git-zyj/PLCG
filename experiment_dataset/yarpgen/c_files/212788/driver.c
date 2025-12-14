#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1435175429;
int var_2 = 775431092;
int var_3 = 164659134;
int var_5 = 64688187;
int var_6 = -25364963;
int var_10 = 726121373;
int zero = 0;
int var_18 = -622987747;
signed char var_19 = (signed char)30;
signed char var_20 = (signed char)22;
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
