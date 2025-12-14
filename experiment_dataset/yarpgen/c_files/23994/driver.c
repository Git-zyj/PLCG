#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)60;
int var_5 = 1808084787;
int var_8 = -1626698507;
int var_9 = 1462065706;
unsigned char var_10 = (unsigned char)175;
int var_11 = -1948572805;
long long int var_18 = 2933179285685038713LL;
int zero = 0;
unsigned long long int var_19 = 4201385209717518681ULL;
signed char var_20 = (signed char)23;
long long int var_21 = -6128439847239867740LL;
int var_22 = -635922125;
long long int var_23 = -4752555791207200516LL;
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
