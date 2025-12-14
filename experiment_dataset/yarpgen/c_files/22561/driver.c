#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7413062374392682984LL;
long long int var_7 = -2514117230087875582LL;
signed char var_9 = (signed char)-30;
signed char var_10 = (signed char)-11;
long long int var_11 = 7501588542313866243LL;
int var_14 = 41990042;
long long int var_17 = -7216640003790242277LL;
int zero = 0;
long long int var_18 = 7670336551264598011LL;
signed char var_19 = (signed char)3;
int var_20 = -779760756;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
