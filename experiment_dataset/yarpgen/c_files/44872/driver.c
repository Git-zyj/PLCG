#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)43;
unsigned long long int var_8 = 5325266460155101818ULL;
unsigned char var_9 = (unsigned char)148;
unsigned long long int var_10 = 17895034844084899370ULL;
int var_11 = 1212148664;
int zero = 0;
unsigned long long int var_12 = 8411529678591081107ULL;
unsigned char var_13 = (unsigned char)229;
unsigned long long int var_14 = 3971887717780059786ULL;
long long int var_15 = 3814757506197875173LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
