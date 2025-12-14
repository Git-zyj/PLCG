#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7703226703022665690ULL;
unsigned long long int var_2 = 11843283646193809768ULL;
long long int var_3 = 8598825065720211190LL;
unsigned short var_4 = (unsigned short)25498;
signed char var_7 = (signed char)-70;
unsigned short var_8 = (unsigned short)59087;
unsigned int var_9 = 914928920U;
int zero = 0;
unsigned long long int var_12 = 12066527317705486978ULL;
unsigned long long int var_13 = 8459480890538650660ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
