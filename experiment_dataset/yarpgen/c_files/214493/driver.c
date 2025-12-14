#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1254580260;
int var_8 = 1129574563;
signed char var_11 = (signed char)30;
long long int var_12 = 7153606965183949527LL;
int var_17 = -74714635;
int var_18 = -46758396;
int zero = 0;
signed char var_19 = (signed char)-2;
short var_20 = (short)10643;
short var_21 = (short)13557;
void init() {
}

void checksum() {
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
