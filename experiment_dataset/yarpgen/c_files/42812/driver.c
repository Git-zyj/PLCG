#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
long long int var_2 = -6888505555258795774LL;
long long int var_3 = -1388182589339882880LL;
unsigned long long int var_8 = 14434649230060112963ULL;
unsigned char var_9 = (unsigned char)171;
unsigned char var_10 = (unsigned char)166;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 9921307738442914459ULL;
signed char var_13 = (signed char)-109;
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
