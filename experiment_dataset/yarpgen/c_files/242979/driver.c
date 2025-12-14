#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)190;
long long int var_6 = -5643229483804151174LL;
unsigned char var_9 = (unsigned char)229;
signed char var_14 = (signed char)-4;
unsigned char var_17 = (unsigned char)180;
int zero = 0;
unsigned char var_18 = (unsigned char)77;
long long int var_19 = 6577548196539385109LL;
signed char var_20 = (signed char)-26;
unsigned char var_21 = (unsigned char)96;
long long int var_22 = -8420736062174286379LL;
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
