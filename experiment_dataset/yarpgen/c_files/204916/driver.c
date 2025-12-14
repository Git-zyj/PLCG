#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10015092732328779005ULL;
signed char var_2 = (signed char)-110;
unsigned short var_3 = (unsigned short)762;
signed char var_4 = (signed char)-62;
long long int var_5 = 7552388576919703537LL;
unsigned long long int var_11 = 8409672022628218975ULL;
signed char var_12 = (signed char)-88;
unsigned short var_13 = (unsigned short)4729;
int zero = 0;
long long int var_14 = 949832859266657453LL;
long long int var_15 = 5065330254488252545LL;
void init() {
}

void checksum() {
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
