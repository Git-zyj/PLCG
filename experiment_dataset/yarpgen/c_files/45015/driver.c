#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7900371992416358911ULL;
unsigned long long int var_6 = 12593985205771256846ULL;
unsigned int var_7 = 985652530U;
unsigned long long int var_9 = 3292008786398323037ULL;
unsigned short var_10 = (unsigned short)42173;
unsigned char var_16 = (unsigned char)217;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-93;
signed char var_19 = (signed char)84;
unsigned int var_20 = 3114949010U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
