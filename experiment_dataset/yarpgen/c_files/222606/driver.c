#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -944085426;
long long int var_3 = -8353019333995596129LL;
int var_7 = 1190980142;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)1239;
signed char var_10 = (signed char)127;
int zero = 0;
long long int var_12 = -6159960253149524894LL;
signed char var_13 = (signed char)17;
long long int var_14 = -4056191461975819278LL;
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
