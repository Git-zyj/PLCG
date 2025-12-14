#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)47;
unsigned int var_2 = 3273450395U;
signed char var_5 = (signed char)31;
_Bool var_6 = (_Bool)0;
int var_8 = 1996502550;
signed char var_10 = (signed char)100;
int zero = 0;
unsigned int var_12 = 3358129794U;
long long int var_13 = 3921733931470692018LL;
unsigned short var_14 = (unsigned short)24844;
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
