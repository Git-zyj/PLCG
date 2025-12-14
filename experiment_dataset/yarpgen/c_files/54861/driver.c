#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)18;
signed char var_8 = (signed char)90;
int var_9 = -98487826;
unsigned long long int var_13 = 1000762193933011069ULL;
unsigned char var_14 = (unsigned char)95;
int zero = 0;
signed char var_20 = (signed char)5;
long long int var_21 = 3577992563535333300LL;
void init() {
}

void checksum() {
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
