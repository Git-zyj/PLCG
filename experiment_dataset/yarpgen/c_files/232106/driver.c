#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
_Bool var_2 = (_Bool)1;
long long int var_4 = 7586475344076619773LL;
short var_5 = (short)8886;
unsigned char var_8 = (unsigned char)188;
short var_9 = (short)27530;
int zero = 0;
short var_13 = (short)20567;
long long int var_14 = 4235456080742918088LL;
int var_15 = -48246197;
unsigned int var_16 = 3220218238U;
int var_17 = 77792844;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
