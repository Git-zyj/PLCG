#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1651799785U;
long long int var_9 = 8629131586435292654LL;
unsigned char var_11 = (unsigned char)201;
unsigned long long int var_12 = 14885239107550778564ULL;
int zero = 0;
unsigned long long int var_19 = 884486518841545819ULL;
unsigned int var_20 = 2105148759U;
long long int var_21 = 5472794474077079340LL;
long long int var_22 = 430219049218907803LL;
void init() {
}

void checksum() {
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
