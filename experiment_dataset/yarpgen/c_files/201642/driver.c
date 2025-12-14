#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4285573354U;
long long int var_9 = -8845230665939130997LL;
signed char var_13 = (signed char)-37;
int zero = 0;
unsigned char var_17 = (unsigned char)118;
long long int var_18 = 7966703192751994973LL;
short var_19 = (short)10301;
long long int var_20 = 3482091224439046588LL;
unsigned long long int var_21 = 17903812419132427854ULL;
signed char var_22 = (signed char)-56;
signed char var_23 = (signed char)85;
unsigned int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2183009146U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
