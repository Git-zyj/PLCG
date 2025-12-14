#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)96;
long long int var_9 = 3098010760903214248LL;
long long int var_10 = 3277695132507402462LL;
long long int var_13 = 2692907709907409157LL;
unsigned long long int var_14 = 3162827245770717268ULL;
int zero = 0;
unsigned long long int var_17 = 4689739523072429294ULL;
unsigned int var_18 = 1058028967U;
long long int var_19 = -8978114605356615558LL;
unsigned long long int var_20 = 12033068736662795564ULL;
long long int var_21 = 871081699880856873LL;
short var_22 = (short)3039;
long long int arr_2 [15] ;
unsigned char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2924674253868666766LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)137;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
