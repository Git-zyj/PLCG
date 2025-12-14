#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)25096;
unsigned long long int var_7 = 2848660366468880933ULL;
signed char var_9 = (signed char)91;
signed char var_10 = (signed char)-110;
short var_11 = (short)6632;
long long int var_12 = -8300041547851670797LL;
int zero = 0;
unsigned short var_16 = (unsigned short)11465;
unsigned long long int var_17 = 16867187163702672484ULL;
int var_18 = 772486157;
unsigned long long int var_19 = 5984452963298596779ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
