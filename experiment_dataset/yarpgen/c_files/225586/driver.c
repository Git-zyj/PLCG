#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4122136324U;
int var_2 = -788464099;
unsigned int var_3 = 3859192103U;
unsigned int var_4 = 2470634204U;
unsigned char var_5 = (unsigned char)131;
unsigned long long int var_7 = 3456841201838401903ULL;
unsigned char var_8 = (unsigned char)155;
long long int var_9 = 4063940384046022306LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)208;
long long int var_12 = 4181493037287029195LL;
unsigned char var_13 = (unsigned char)241;
unsigned long long int var_14 = 2275300342497775135ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
