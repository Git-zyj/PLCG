#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7154895566843612162ULL;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-68;
int zero = 0;
unsigned long long int var_10 = 14604436709843295274ULL;
short var_11 = (short)20817;
unsigned long long int var_12 = 9181990235997561249ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
