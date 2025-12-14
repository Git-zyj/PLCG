#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8456;
short var_1 = (short)15528;
long long int var_3 = -1888571663567719811LL;
long long int var_4 = 713904205184299117LL;
int var_6 = -958498744;
unsigned int var_8 = 1667284360U;
signed char var_11 = (signed char)-16;
long long int var_13 = -6066389566168325611LL;
int zero = 0;
signed char var_16 = (signed char)-25;
long long int var_17 = -2099489024629519160LL;
int var_18 = 763271424;
signed char var_19 = (signed char)59;
void init() {
}

void checksum() {
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
