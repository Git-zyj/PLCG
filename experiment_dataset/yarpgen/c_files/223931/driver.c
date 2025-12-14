#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11555527355714906888ULL;
unsigned int var_4 = 3079643074U;
long long int var_7 = -7805346182628669571LL;
unsigned short var_13 = (unsigned short)63856;
int zero = 0;
unsigned int var_14 = 3844783782U;
long long int var_15 = -5612933352299454053LL;
long long int var_16 = 4972589026550185543LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
