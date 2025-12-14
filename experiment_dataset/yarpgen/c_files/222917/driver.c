#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1440607144;
signed char var_2 = (signed char)24;
long long int var_4 = -2829656045397172958LL;
signed char var_6 = (signed char)-108;
long long int var_9 = -8541400569138028976LL;
unsigned char var_10 = (unsigned char)42;
long long int var_12 = 5325941068843169674LL;
int zero = 0;
unsigned short var_13 = (unsigned short)14355;
int var_14 = 466700627;
unsigned char var_15 = (unsigned char)217;
void init() {
}

void checksum() {
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
