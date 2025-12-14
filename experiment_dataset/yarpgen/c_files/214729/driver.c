#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1413051857;
int var_5 = 718386100;
long long int var_6 = -5387835127430972563LL;
unsigned short var_8 = (unsigned short)9946;
short var_9 = (short)-29483;
short var_16 = (short)18736;
int zero = 0;
short var_18 = (short)4817;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 398653918600602020ULL;
void init() {
}

void checksum() {
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
