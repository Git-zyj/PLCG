#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58559;
long long int var_3 = -8892831036895449423LL;
unsigned int var_7 = 618776097U;
unsigned long long int var_8 = 14642638928105954943ULL;
long long int var_9 = -3992457686202636834LL;
unsigned long long int var_10 = 3463118386195991330ULL;
unsigned short var_13 = (unsigned short)43647;
int zero = 0;
long long int var_14 = 5627255130006436368LL;
unsigned int var_15 = 1893391211U;
unsigned int var_16 = 2805791636U;
long long int var_17 = 8662510889406505175LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
