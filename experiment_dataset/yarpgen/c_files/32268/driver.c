#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
long long int var_10 = 6486830314872204946LL;
unsigned short var_11 = (unsigned short)41202;
unsigned char var_13 = (unsigned char)84;
unsigned char var_14 = (unsigned char)231;
int zero = 0;
unsigned char var_18 = (unsigned char)177;
int var_19 = 190482858;
int var_20 = 1817657981;
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
