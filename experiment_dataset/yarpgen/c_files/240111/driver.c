#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1186;
long long int var_6 = -3280125937609028325LL;
long long int var_7 = 4044692941818457609LL;
long long int var_9 = -5395671166982326030LL;
int zero = 0;
long long int var_10 = -8176041278145460182LL;
long long int var_11 = 174207403016963023LL;
short var_12 = (short)27369;
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
