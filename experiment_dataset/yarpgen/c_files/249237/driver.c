#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7755318186214259358ULL;
long long int var_2 = -7370395986528523359LL;
int var_4 = -1809806734;
long long int var_8 = 1593278528257654808LL;
unsigned long long int var_11 = 4195036235380048475ULL;
int zero = 0;
long long int var_12 = 8715671854296109323LL;
long long int var_13 = -8217642564415404121LL;
void init() {
}

void checksum() {
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
