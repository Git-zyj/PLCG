#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3322404039859719714ULL;
unsigned long long int var_5 = 9102999547586927833ULL;
long long int var_6 = -6039380936822780066LL;
long long int var_7 = 592292620682519479LL;
unsigned short var_8 = (unsigned short)2533;
short var_9 = (short)13335;
unsigned short var_11 = (unsigned short)58377;
long long int var_13 = -5299637275418554928LL;
int zero = 0;
int var_19 = 1378008274;
int var_20 = 49484796;
unsigned long long int var_21 = 2890683687829793441ULL;
int var_22 = 222531596;
unsigned long long int var_23 = 14487358332473848585ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
