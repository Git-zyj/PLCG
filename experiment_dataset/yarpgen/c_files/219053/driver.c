#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10313398868622204757ULL;
int var_1 = 1288962134;
int var_2 = 159717845;
unsigned long long int var_3 = 14647487540007854616ULL;
_Bool var_4 = (_Bool)1;
int var_7 = -991095736;
unsigned long long int var_8 = 7236611360349448174ULL;
unsigned long long int var_9 = 15316719720253667671ULL;
int zero = 0;
int var_10 = 341442361;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)78;
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
