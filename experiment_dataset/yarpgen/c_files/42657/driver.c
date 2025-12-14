#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7754184287909213010LL;
long long int var_2 = -4363178923476157462LL;
long long int var_10 = -6795556836742714153LL;
int zero = 0;
int var_12 = -398342297;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)41683;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
