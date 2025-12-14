#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10533881246349494621ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15754855250850653449ULL;
signed char var_9 = (signed char)-14;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5495766671651834624LL;
unsigned long long int var_22 = 5943775455839647034ULL;
unsigned long long int var_23 = 17850292389869545668ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
