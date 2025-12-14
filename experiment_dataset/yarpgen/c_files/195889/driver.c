#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3123321405788545202LL;
long long int var_2 = 5620632351473800321LL;
int var_3 = -1803851035;
unsigned int var_4 = 3470844857U;
unsigned long long int var_5 = 13948926771296301962ULL;
int var_6 = -1479661384;
signed char var_9 = (signed char)97;
int zero = 0;
signed char var_12 = (signed char)-2;
unsigned int var_13 = 614759922U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
