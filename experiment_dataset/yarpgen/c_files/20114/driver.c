#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-7;
unsigned int var_5 = 3488067498U;
unsigned int var_7 = 2769741878U;
unsigned long long int var_9 = 2203614021251780462ULL;
signed char var_10 = (signed char)58;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-20;
long long int var_14 = -5394146972265770033LL;
int zero = 0;
signed char var_16 = (signed char)-121;
long long int var_17 = 3562472223854083113LL;
void init() {
}

void checksum() {
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
