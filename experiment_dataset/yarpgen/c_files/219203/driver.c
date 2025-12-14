#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 911225885848081508ULL;
long long int var_2 = 3497285130790704235LL;
long long int var_3 = -7137409355708216988LL;
unsigned long long int var_5 = 12469042950759223856ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2065484571U;
unsigned int var_11 = 2442750330U;
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
