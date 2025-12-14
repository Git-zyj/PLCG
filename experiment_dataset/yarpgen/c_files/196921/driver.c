#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3260378856906143744LL;
int var_1 = -1769200956;
unsigned char var_2 = (unsigned char)70;
signed char var_3 = (signed char)-63;
unsigned long long int var_5 = 10569782432667749534ULL;
int var_9 = -1580259976;
int zero = 0;
unsigned char var_13 = (unsigned char)57;
long long int var_14 = 2888333448111633687LL;
unsigned int var_15 = 1541802379U;
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
