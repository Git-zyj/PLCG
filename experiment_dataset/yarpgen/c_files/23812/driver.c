#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5467904699753961879LL;
long long int var_5 = 3409601482241338436LL;
unsigned int var_6 = 3203627001U;
unsigned short var_9 = (unsigned short)60493;
unsigned long long int var_10 = 9204474328947468514ULL;
unsigned short var_12 = (unsigned short)4681;
unsigned int var_14 = 2771572708U;
unsigned short var_15 = (unsigned short)1179;
int zero = 0;
long long int var_16 = -2917561760570549094LL;
unsigned short var_17 = (unsigned short)2185;
unsigned long long int var_18 = 18157296326072760313ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
