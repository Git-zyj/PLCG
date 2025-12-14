#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11142649312394015549ULL;
unsigned short var_1 = (unsigned short)16352;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 2072125489836006163ULL;
unsigned short var_9 = (unsigned short)60929;
int zero = 0;
unsigned long long int var_10 = 8755175365114804425ULL;
unsigned long long int var_11 = 2593507150153385714ULL;
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
