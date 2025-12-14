#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3827760808688787115LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 4183143172582488574ULL;
long long int var_14 = 2601675212468265824LL;
unsigned long long int var_15 = 5102639224093464453ULL;
int zero = 0;
short var_19 = (short)-14657;
unsigned int var_20 = 3926577614U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17442234776282698289ULL;
unsigned char var_23 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
