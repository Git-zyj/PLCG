#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4254161392U;
long long int var_5 = -4021171867188234507LL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3336520186U;
int var_9 = 1049386198;
unsigned char var_11 = (unsigned char)105;
int zero = 0;
unsigned int var_14 = 5695166U;
unsigned short var_15 = (unsigned short)5647;
unsigned char var_16 = (unsigned char)21;
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
