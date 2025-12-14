#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23318;
long long int var_4 = 3956968989259047447LL;
long long int var_5 = -2206193990499684058LL;
long long int var_6 = -8242302815251178204LL;
unsigned short var_7 = (unsigned short)5346;
unsigned short var_9 = (unsigned short)47104;
unsigned long long int var_10 = 16729867008544966376ULL;
int zero = 0;
long long int var_11 = 4083480317167663542LL;
signed char var_12 = (signed char)31;
long long int var_13 = -5838171847966605506LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
