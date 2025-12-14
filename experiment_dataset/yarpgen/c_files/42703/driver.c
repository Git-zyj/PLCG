#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19548;
unsigned long long int var_1 = 9621056146158919735ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 9173008041538771069ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3631410714U;
int zero = 0;
unsigned long long int var_10 = 10471307695415558738ULL;
long long int var_11 = 5035756104306305275LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 821524786U;
unsigned int var_14 = 3510812266U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
