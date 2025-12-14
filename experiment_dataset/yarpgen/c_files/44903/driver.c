#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)64;
unsigned long long int var_9 = 11219623621315473281ULL;
unsigned char var_14 = (unsigned char)110;
int zero = 0;
long long int var_20 = 7997954586228814877LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)98;
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
