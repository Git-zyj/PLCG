#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1111;
unsigned int var_6 = 3863585080U;
unsigned long long int var_7 = 7836422981572543253ULL;
unsigned long long int var_8 = 10260514423706187073ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)62907;
long long int var_12 = -2664357343095002761LL;
int zero = 0;
unsigned long long int var_17 = 16663151849290610094ULL;
unsigned long long int var_18 = 4237152877444615401ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
