#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)244;
long long int var_3 = 8542300947445305427LL;
signed char var_7 = (signed char)22;
long long int var_10 = -567466068887010428LL;
long long int var_14 = 8234482906878709281LL;
long long int var_15 = -1882913892464337101LL;
int zero = 0;
unsigned long long int var_18 = 8051625310448356073ULL;
unsigned long long int var_19 = 14518281353610596107ULL;
long long int var_20 = -831820436374104749LL;
unsigned char var_21 = (unsigned char)171;
int var_22 = -776095215;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
