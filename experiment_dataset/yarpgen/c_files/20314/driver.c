#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8871;
signed char var_3 = (signed char)55;
signed char var_5 = (signed char)-31;
long long int var_8 = 1161058303917864781LL;
signed char var_9 = (signed char)-29;
unsigned short var_16 = (unsigned short)15258;
signed char var_17 = (signed char)-121;
unsigned short var_18 = (unsigned short)50728;
int zero = 0;
signed char var_19 = (signed char)-55;
signed char var_20 = (signed char)98;
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
