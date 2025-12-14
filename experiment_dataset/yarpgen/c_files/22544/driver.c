#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
_Bool var_2 = (_Bool)1;
long long int var_6 = 5213286794167426734LL;
long long int var_11 = -7233201928714736558LL;
unsigned int var_12 = 2066946053U;
unsigned char var_13 = (unsigned char)177;
long long int var_14 = 7541160944099075747LL;
long long int var_16 = 6940862978758199927LL;
int zero = 0;
int var_19 = 375340555;
unsigned long long int var_20 = 4558803778632426339ULL;
unsigned char var_21 = (unsigned char)111;
signed char var_22 = (signed char)-87;
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
