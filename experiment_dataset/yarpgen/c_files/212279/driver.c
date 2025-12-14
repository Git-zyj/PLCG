#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2850865954U;
short var_3 = (short)5241;
int var_9 = -232134147;
int var_12 = -674890166;
unsigned long long int var_15 = 17108304282989783254ULL;
int zero = 0;
short var_17 = (short)27617;
short var_18 = (short)14036;
short var_19 = (short)-2564;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
