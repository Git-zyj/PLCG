#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39856;
long long int var_3 = -2852027432000214332LL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1372841274U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2526282732U;
int zero = 0;
unsigned int var_10 = 2373612079U;
unsigned long long int var_11 = 4788329075118708100ULL;
unsigned short var_12 = (unsigned short)64136;
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
