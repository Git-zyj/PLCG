#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7878214425883640230LL;
unsigned char var_3 = (unsigned char)29;
unsigned long long int var_4 = 7859213488823944631ULL;
int var_5 = 1965568098;
long long int var_7 = 6524297832165041917LL;
unsigned char var_8 = (unsigned char)65;
unsigned int var_9 = 894994454U;
unsigned long long int var_10 = 10702623876374930460ULL;
int zero = 0;
int var_11 = 356075179;
_Bool var_12 = (_Bool)0;
short var_13 = (short)15972;
short var_14 = (short)14604;
unsigned long long int var_15 = 14020490484360145550ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
