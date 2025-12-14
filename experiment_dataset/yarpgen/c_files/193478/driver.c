#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1188132429;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 10910846806635142577ULL;
unsigned long long int var_7 = 3234226744572018095ULL;
long long int var_8 = 1427192776070386107LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 4781644639811353612ULL;
short var_14 = (short)20050;
unsigned long long int var_18 = 6821751803273556967ULL;
int zero = 0;
long long int var_20 = -2036533347888423789LL;
long long int var_21 = 53570896252666277LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = 8280596476055429805LL;
short var_24 = (short)-2904;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
