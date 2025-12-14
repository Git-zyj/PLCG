#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -429896600;
long long int var_6 = -3565560236273262392LL;
_Bool var_7 = (_Bool)1;
long long int var_9 = 8848645227633566752LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-27282;
unsigned long long int var_14 = 7221729483682944857ULL;
unsigned long long int var_15 = 5262004294433708334ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
