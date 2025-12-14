#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1702035360;
unsigned long long int var_2 = 12112223254421523611ULL;
long long int var_3 = 6351354006154864223LL;
long long int var_4 = -146509191155044093LL;
int var_6 = 451410218;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 12151557876476745459ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)52417;
unsigned int var_12 = 2117737110U;
long long int var_13 = 8439728196997087935LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
