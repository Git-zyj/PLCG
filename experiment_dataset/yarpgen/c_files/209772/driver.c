#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4398;
short var_3 = (short)17800;
short var_10 = (short)9954;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5989864936464196289LL;
long long int var_16 = -1568028607335620055LL;
short var_17 = (short)20814;
int var_18 = -1600304224;
int zero = 0;
unsigned short var_20 = (unsigned short)19450;
short var_21 = (short)-30654;
short var_22 = (short)-11722;
unsigned int var_23 = 3900636330U;
void init() {
}

void checksum() {
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
