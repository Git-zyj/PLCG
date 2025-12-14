#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3258874104690979827LL;
unsigned long long int var_4 = 1512137217233616458ULL;
signed char var_5 = (signed char)6;
long long int var_7 = 3413872109530245751LL;
int var_8 = 2123731236;
unsigned short var_9 = (unsigned short)46934;
int zero = 0;
int var_10 = 1004381316;
unsigned long long int var_11 = 2395747066284633025ULL;
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
