#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10315;
unsigned long long int var_1 = 7249626219790350229ULL;
unsigned long long int var_2 = 17292093151247384316ULL;
long long int var_3 = -997154530993107108LL;
signed char var_4 = (signed char)1;
int var_5 = -689449334;
short var_6 = (short)28751;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_10 = -2123619282028025068LL;
int zero = 0;
unsigned long long int var_11 = 5364347847155314857ULL;
short var_12 = (short)13821;
unsigned char var_13 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
