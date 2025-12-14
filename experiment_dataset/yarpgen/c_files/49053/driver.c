#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7919593971288393316ULL;
short var_3 = (short)6536;
unsigned long long int var_8 = 3311372602271315146ULL;
int zero = 0;
unsigned long long int var_10 = 16013489001556456636ULL;
unsigned long long int var_11 = 4755546279164323198ULL;
short var_12 = (short)-19999;
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
