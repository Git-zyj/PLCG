#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)109;
signed char var_5 = (signed char)-38;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 1341462112U;
int zero = 0;
long long int var_19 = 8832350614940446905LL;
long long int var_20 = 6394455304862237745LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -2689723156821490221LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
