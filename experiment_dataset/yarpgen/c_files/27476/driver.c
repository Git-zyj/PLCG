#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)254;
_Bool var_7 = (_Bool)1;
int var_10 = 1499297781;
unsigned long long int var_12 = 13637100964851073087ULL;
_Bool var_13 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6294515973649194110ULL;
int zero = 0;
long long int var_19 = -3083954564932377466LL;
unsigned long long int var_20 = 13897978432324342100ULL;
short var_21 = (short)-25926;
long long int var_22 = 6457999582925396172LL;
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
