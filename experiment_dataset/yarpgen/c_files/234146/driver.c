#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 2136228042541455007LL;
signed char var_7 = (signed char)-111;
unsigned int var_8 = 3870464833U;
long long int var_9 = -984466744506333751LL;
int zero = 0;
long long int var_13 = 3724235465221056719LL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 422604741U;
unsigned long long int var_16 = 15560679500004086908ULL;
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
