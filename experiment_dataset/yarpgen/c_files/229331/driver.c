#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17348264611906848306ULL;
int var_1 = 1338505135;
signed char var_4 = (signed char)22;
unsigned long long int var_5 = 17051178815640413476ULL;
unsigned long long int var_6 = 17559864210215323796ULL;
unsigned short var_9 = (unsigned short)63988;
unsigned short var_11 = (unsigned short)63851;
long long int var_13 = 6032388792390354259LL;
unsigned short var_14 = (unsigned short)41230;
int zero = 0;
unsigned short var_15 = (unsigned short)36680;
unsigned int var_16 = 2324096068U;
unsigned short var_17 = (unsigned short)56630;
void init() {
}

void checksum() {
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
