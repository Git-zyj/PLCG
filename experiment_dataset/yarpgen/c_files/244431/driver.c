#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -395984140;
unsigned char var_3 = (unsigned char)94;
unsigned short var_4 = (unsigned short)58150;
unsigned int var_8 = 4294941999U;
unsigned long long int var_9 = 10856088381896437643ULL;
int zero = 0;
unsigned int var_10 = 2664803374U;
unsigned long long int var_11 = 2600285806689851626ULL;
long long int var_12 = -6736005526074686720LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
