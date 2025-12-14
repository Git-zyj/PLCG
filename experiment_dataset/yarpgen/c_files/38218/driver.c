#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5338256167271164319LL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)112;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -520880956;
unsigned short var_11 = (unsigned short)49193;
_Bool var_12 = (_Bool)0;
long long int var_13 = -1222259225168283608LL;
unsigned long long int var_14 = 3452784784771944619ULL;
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
