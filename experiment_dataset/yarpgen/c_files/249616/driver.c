#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-19;
unsigned long long int var_4 = 5875744972189612519ULL;
int var_5 = 465056793;
signed char var_9 = (signed char)54;
unsigned long long int var_10 = 2648268270347354829ULL;
int var_11 = -250190705;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)107;
long long int var_14 = 4455792485323643303LL;
void init() {
}

void checksum() {
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
