#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1691998614307987935LL;
long long int var_3 = 3989810231352852377LL;
_Bool var_7 = (_Bool)0;
int var_9 = 296544878;
signed char var_11 = (signed char)43;
int zero = 0;
signed char var_12 = (signed char)49;
long long int var_13 = 5055802343958858892LL;
unsigned long long int var_14 = 18236904877544571837ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
