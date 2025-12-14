#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1695511287;
signed char var_9 = (signed char)68;
int var_10 = 1445090576;
signed char var_11 = (signed char)36;
signed char var_12 = (signed char)39;
unsigned int var_18 = 2204293840U;
int zero = 0;
int var_19 = 2107803718;
long long int var_20 = -8247823794148940118LL;
int var_21 = -1934656224;
unsigned int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1082405498U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
