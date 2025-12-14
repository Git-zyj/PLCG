#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6855995401455717902LL;
long long int var_4 = -5808196058103111082LL;
signed char var_7 = (signed char)-67;
unsigned int var_8 = 2756843530U;
long long int var_9 = 5465444423225466367LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 6018270390890462192LL;
int zero = 0;
long long int var_13 = 2171220210231851444LL;
unsigned long long int var_14 = 2577106141363779170ULL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -4318055617976608625LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
