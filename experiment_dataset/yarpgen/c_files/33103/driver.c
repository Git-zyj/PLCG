#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32438;
long long int var_5 = 7472438329821298519LL;
long long int var_9 = -5049547360400554990LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 8599652830359253991ULL;
long long int var_13 = 1778780769226783193LL;
unsigned long long int var_16 = 4926820240626245696ULL;
int var_17 = 831854772;
long long int var_19 = -1932983647916932863LL;
int zero = 0;
long long int var_20 = 445662462645051128LL;
long long int var_21 = 7300765288238085182LL;
int var_22 = 2146057313;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
