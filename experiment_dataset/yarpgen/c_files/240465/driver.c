#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)111;
unsigned char var_5 = (unsigned char)79;
signed char var_6 = (signed char)54;
unsigned long long int var_8 = 8351948606494370132ULL;
signed char var_10 = (signed char)31;
unsigned long long int var_11 = 4815460994327175152ULL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-28;
unsigned short var_17 = (unsigned short)58951;
unsigned long long int var_18 = 10539099821303011272ULL;
unsigned short var_19 = (unsigned short)59277;
int zero = 0;
int var_20 = -1882731985;
signed char var_21 = (signed char)67;
unsigned long long int var_22 = 9312994376331835422ULL;
_Bool var_23 = (_Bool)0;
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
