#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2080496307;
unsigned int var_4 = 2501549082U;
_Bool var_5 = (_Bool)0;
int var_6 = 964308126;
int var_7 = -51223357;
unsigned long long int var_9 = 16532192709357650474ULL;
unsigned int var_10 = 4159245211U;
unsigned long long int var_11 = 16573647505697556817ULL;
int var_12 = -1730611803;
int zero = 0;
unsigned long long int var_13 = 15946644444765023299ULL;
unsigned int var_14 = 218547559U;
int var_15 = 819724609;
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
