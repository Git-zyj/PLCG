#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7901884614174242860ULL;
long long int var_4 = 3872403126228545335LL;
unsigned long long int var_11 = 10855877101871309719ULL;
short var_13 = (short)18016;
int zero = 0;
long long int var_19 = 3696530680473039029LL;
unsigned char var_20 = (unsigned char)163;
void init() {
}

void checksum() {
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
