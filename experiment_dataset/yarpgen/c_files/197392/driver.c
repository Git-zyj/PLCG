#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1790665464;
int var_2 = 870269759;
unsigned long long int var_3 = 9975260193883390315ULL;
signed char var_6 = (signed char)41;
int var_7 = -417757934;
signed char var_9 = (signed char)88;
int zero = 0;
int var_12 = -563331178;
unsigned long long int var_13 = 5022363557521014729ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
