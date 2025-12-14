#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 7742521645494851635LL;
unsigned int var_4 = 1797201753U;
_Bool var_10 = (_Bool)0;
int var_12 = 434864936;
int var_16 = 1470023841;
int zero = 0;
int var_18 = -2131361342;
unsigned short var_19 = (unsigned short)19209;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
