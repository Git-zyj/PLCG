#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2505620197U;
unsigned long long int var_7 = 15008583345628897978ULL;
unsigned long long int var_9 = 8638402844380773013ULL;
unsigned long long int var_11 = 13173550054393482038ULL;
unsigned long long int var_12 = 15061617995406449115ULL;
int zero = 0;
int var_15 = 1023730915;
long long int var_16 = 7818266050258129236LL;
unsigned long long int var_17 = 16225183701330692534ULL;
void init() {
}

void checksum() {
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
