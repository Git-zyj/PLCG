#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5508;
long long int var_3 = -3654168926768065609LL;
long long int var_5 = 2379750179615986391LL;
int var_7 = -621862096;
long long int var_14 = 3725127333731470752LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -8943826007218152247LL;
unsigned int var_20 = 1922476546U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
