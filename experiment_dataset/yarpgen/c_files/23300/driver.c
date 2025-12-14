#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2248986056206294350LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 2242247263589393867ULL;
short var_9 = (short)-24018;
unsigned char var_11 = (unsigned char)69;
int zero = 0;
long long int var_13 = 5443975843723364190LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-25974;
int var_16 = -1079965863;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 5726361752235044153LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
