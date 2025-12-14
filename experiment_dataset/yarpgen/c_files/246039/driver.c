#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1122955438213266735LL;
long long int var_1 = 8761362573352612530LL;
long long int var_2 = -6704896539674510307LL;
long long int var_7 = -2747995789272399902LL;
long long int var_9 = 8630436785956481288LL;
long long int var_10 = 6010709305672635224LL;
long long int var_12 = -397191255447167521LL;
int zero = 0;
long long int var_14 = -3916416151312574163LL;
long long int var_15 = -3040558580553613661LL;
long long int var_16 = -3788594049605701340LL;
long long int var_17 = 8959659433623739929LL;
long long int var_18 = 1741861097072961381LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
