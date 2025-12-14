#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1107376878U;
unsigned long long int var_4 = 17704307255537903462ULL;
_Bool var_5 = (_Bool)0;
long long int var_7 = -1523452635855734839LL;
signed char var_14 = (signed char)-19;
int zero = 0;
unsigned short var_15 = (unsigned short)32306;
long long int var_16 = -7027339899656133723LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
