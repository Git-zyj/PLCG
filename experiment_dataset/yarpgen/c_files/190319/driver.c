#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10003494974392800874ULL;
int var_2 = 499505914;
unsigned long long int var_5 = 12359130662409435410ULL;
long long int var_6 = 3541175270280124092LL;
unsigned char var_11 = (unsigned char)125;
int zero = 0;
unsigned char var_18 = (unsigned char)11;
unsigned int var_19 = 3257232038U;
long long int var_20 = 2682599882795644376LL;
short var_21 = (short)10938;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
