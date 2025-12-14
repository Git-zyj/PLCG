#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 232278590U;
int var_2 = 1668406922;
int var_3 = 220176739;
unsigned int var_4 = 1414540795U;
unsigned long long int var_9 = 17199418977997450186ULL;
short var_14 = (short)32510;
int zero = 0;
long long int var_15 = 3871953179898521103LL;
unsigned long long int var_16 = 1069823889925128695ULL;
int var_17 = 1488005065;
long long int var_18 = 3797624719366873852LL;
unsigned char var_19 = (unsigned char)155;
int arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 1549742841;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
