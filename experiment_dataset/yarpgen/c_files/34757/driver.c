#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -683207368;
unsigned long long int var_5 = 7868797088433509515ULL;
unsigned long long int var_6 = 8741525021074726316ULL;
int var_7 = -524021396;
int zero = 0;
unsigned long long int var_12 = 774411333765575556ULL;
signed char var_13 = (signed char)-18;
unsigned long long int var_14 = 13283907338721609890ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
