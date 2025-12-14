#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4557410009116630032LL;
int var_4 = 1754011579;
int var_5 = 1228225773;
long long int var_6 = -1970041811519451952LL;
signed char var_7 = (signed char)-37;
unsigned int var_8 = 2086160078U;
short var_9 = (short)-14618;
short var_10 = (short)30469;
int zero = 0;
unsigned long long int var_14 = 16254387539387005855ULL;
unsigned short var_15 = (unsigned short)36818;
signed char var_16 = (signed char)15;
short var_17 = (short)-9078;
unsigned int var_18 = 3801031499U;
long long int arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 6134103169668912990LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
