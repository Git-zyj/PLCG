#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)32;
short var_9 = (short)32647;
unsigned char var_11 = (unsigned char)39;
int zero = 0;
int var_13 = -1147765868;
short var_14 = (short)27067;
unsigned short var_15 = (unsigned short)30092;
int var_16 = 1011998370;
unsigned short var_17 = (unsigned short)57470;
signed char var_18 = (signed char)-57;
long long int arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -725484665414521332LL;
}

void checksum() {
    hash(&seed, var_13);
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
