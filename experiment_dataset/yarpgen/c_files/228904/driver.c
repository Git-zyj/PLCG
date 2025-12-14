#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)3468;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-124;
int zero = 0;
unsigned long long int var_20 = 9322112384765097003ULL;
signed char var_21 = (signed char)-72;
void init() {
}

void checksum() {
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
