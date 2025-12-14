#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6221256011427756778LL;
int var_2 = 1728065059;
int var_6 = -581726212;
unsigned long long int var_9 = 525608659964664608ULL;
signed char var_10 = (signed char)-63;
signed char var_11 = (signed char)121;
long long int var_12 = 7820964925352852554LL;
int zero = 0;
long long int var_14 = 6796466795139577155LL;
long long int var_15 = -7484649568929252789LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
