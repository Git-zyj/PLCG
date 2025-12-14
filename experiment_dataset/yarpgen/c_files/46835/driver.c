#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 515417092;
int var_4 = 1480667767;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)58;
int zero = 0;
int var_11 = -499752717;
_Bool var_12 = (_Bool)1;
int var_13 = 890962079;
unsigned int var_14 = 607923859U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
