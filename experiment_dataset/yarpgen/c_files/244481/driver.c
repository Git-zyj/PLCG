#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)22;
unsigned char var_6 = (unsigned char)81;
long long int var_7 = -8184651019308783804LL;
unsigned int var_8 = 133548405U;
unsigned long long int var_9 = 9387752730104663320ULL;
int zero = 0;
int var_12 = -2106348521;
short var_13 = (short)9170;
long long int var_14 = 5216511151831436981LL;
unsigned short var_15 = (unsigned short)1445;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
