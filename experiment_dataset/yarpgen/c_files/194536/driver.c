#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7883933410904132402ULL;
long long int var_7 = 4436324868397334062LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)118;
int zero = 0;
unsigned long long int var_11 = 2941793161148864344ULL;
int var_12 = -836968738;
void init() {
}

void checksum() {
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
