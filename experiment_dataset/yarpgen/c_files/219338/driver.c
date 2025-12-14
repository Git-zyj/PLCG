#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2096717972U;
signed char var_7 = (signed char)-37;
int var_9 = 203576717;
long long int var_10 = -3573591318589558669LL;
int zero = 0;
unsigned long long int var_11 = 10179484923674716669ULL;
unsigned long long int var_12 = 3809192515698976635ULL;
unsigned long long int var_13 = 2861046337201353698ULL;
unsigned int var_14 = 603207091U;
unsigned short var_15 = (unsigned short)42383;
int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1429916385 : -861758264;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
