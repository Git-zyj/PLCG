#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5603031944697942361LL;
long long int var_2 = 1838183313607480113LL;
long long int var_3 = -6735160326508085376LL;
long long int var_5 = -2587438117363687050LL;
long long int var_8 = 7987364140903002229LL;
long long int var_9 = -3985525697661681338LL;
int zero = 0;
long long int var_10 = -6858660233973692393LL;
long long int var_11 = -133483459460733225LL;
long long int var_12 = -4208177769855144613LL;
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
