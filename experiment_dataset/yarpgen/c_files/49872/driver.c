#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned short var_6 = (unsigned short)51663;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)26161;
int zero = 0;
unsigned short var_18 = (unsigned short)39684;
unsigned long long int var_19 = 12350544718120825432ULL;
void init() {
}

void checksum() {
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
