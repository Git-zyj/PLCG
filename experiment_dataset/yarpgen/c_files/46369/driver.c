#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 11663183445559201271ULL;
short var_7 = (short)-2529;
signed char var_9 = (signed char)-1;
signed char var_13 = (signed char)-39;
int zero = 0;
unsigned long long int var_14 = 16629395915627687235ULL;
unsigned long long int var_15 = 9870428951562988114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
