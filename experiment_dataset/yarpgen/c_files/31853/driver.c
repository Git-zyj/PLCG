#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1179545619U;
unsigned long long int var_3 = 7516109261107547884ULL;
unsigned int var_5 = 540870140U;
unsigned long long int var_6 = 9817624589307187194ULL;
unsigned long long int var_7 = 17721179452743266834ULL;
unsigned char var_9 = (unsigned char)34;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 466147349U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
