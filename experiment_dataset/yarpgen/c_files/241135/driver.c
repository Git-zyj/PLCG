#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12064296419071552116ULL;
long long int var_6 = 4675067092837809258LL;
short var_9 = (short)27707;
short var_10 = (short)-7524;
unsigned char var_15 = (unsigned char)203;
int var_16 = -899659774;
int zero = 0;
unsigned long long int var_18 = 2779482981754190011ULL;
short var_19 = (short)-7281;
unsigned long long int var_20 = 4182820123461862770ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
