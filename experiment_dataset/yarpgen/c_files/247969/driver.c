#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
short var_1 = (short)-21317;
int var_7 = -1651873405;
long long int var_9 = -2344217279523561572LL;
int zero = 0;
signed char var_11 = (signed char)-61;
long long int var_12 = 1239857408725622019LL;
void init() {
}

void checksum() {
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
