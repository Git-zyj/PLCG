#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34063;
unsigned int var_2 = 1324154347U;
unsigned short var_5 = (unsigned short)1470;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)134;
unsigned char var_14 = (unsigned char)41;
unsigned char var_15 = (unsigned char)164;
int zero = 0;
int var_20 = 1000981807;
long long int var_21 = -429578511886219903LL;
unsigned char var_22 = (unsigned char)219;
unsigned int var_23 = 1075648870U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
