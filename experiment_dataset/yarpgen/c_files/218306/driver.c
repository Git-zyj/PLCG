#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3208718888U;
unsigned long long int var_1 = 4921642795993195390ULL;
short var_2 = (short)-2344;
unsigned char var_3 = (unsigned char)113;
unsigned char var_9 = (unsigned char)188;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)192;
int zero = 0;
unsigned long long int var_13 = 14723991788231005537ULL;
unsigned char var_14 = (unsigned char)113;
short var_15 = (short)-29130;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
