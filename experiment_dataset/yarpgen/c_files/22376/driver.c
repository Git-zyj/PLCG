#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7595664189978068865LL;
long long int var_4 = 4122991674772810801LL;
unsigned short var_13 = (unsigned short)34527;
long long int var_14 = 1980716815793109413LL;
int zero = 0;
int var_19 = -1452911823;
long long int var_20 = -8156885412600949707LL;
unsigned short var_21 = (unsigned short)25111;
void init() {
}

void checksum() {
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
