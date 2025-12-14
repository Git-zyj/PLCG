#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2617900762U;
unsigned long long int var_6 = 6643197945358046968ULL;
unsigned int var_9 = 1019466564U;
long long int var_12 = -3530774949591045836LL;
int zero = 0;
unsigned short var_13 = (unsigned short)12819;
unsigned long long int var_14 = 3626828722547885331ULL;
long long int var_15 = -5663808173721973338LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
