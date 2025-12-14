#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
unsigned int var_1 = 4004411732U;
unsigned char var_3 = (unsigned char)207;
int var_5 = -1277786847;
unsigned int var_9 = 590736627U;
unsigned char var_10 = (unsigned char)155;
int var_11 = 840276208;
int var_18 = 722086208;
int var_19 = 1659216641;
int zero = 0;
unsigned int var_20 = 253463592U;
unsigned int var_21 = 2714623895U;
signed char var_22 = (signed char)-38;
unsigned char var_23 = (unsigned char)102;
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
