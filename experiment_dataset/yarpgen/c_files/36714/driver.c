#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
signed char var_3 = (signed char)6;
signed char var_5 = (signed char)-78;
signed char var_7 = (signed char)-121;
signed char var_9 = (signed char)-39;
signed char var_10 = (signed char)72;
signed char var_13 = (signed char)-54;
signed char var_16 = (signed char)-7;
signed char var_18 = (signed char)75;
signed char var_19 = (signed char)49;
int zero = 0;
signed char var_20 = (signed char)113;
signed char var_21 = (signed char)54;
signed char var_22 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
