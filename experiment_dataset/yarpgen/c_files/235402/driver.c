#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9276;
short var_1 = (short)-25154;
short var_2 = (short)-260;
short var_4 = (short)-23036;
short var_5 = (short)-14972;
short var_6 = (short)-24876;
short var_7 = (short)27087;
short var_8 = (short)14390;
short var_9 = (short)23105;
int zero = 0;
short var_11 = (short)-5056;
short var_12 = (short)19919;
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
