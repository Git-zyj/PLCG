#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8216714480623692329LL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_10 = -2058535058;
short var_11 = (short)22788;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 1484612950;
short var_15 = (short)-8272;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
