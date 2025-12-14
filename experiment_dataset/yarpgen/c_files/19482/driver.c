#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5036371656380748084LL;
unsigned int var_4 = 2245646562U;
short var_7 = (short)32514;
signed char var_8 = (signed char)33;
short var_10 = (short)8101;
unsigned int var_11 = 1630284157U;
short var_12 = (short)15970;
int zero = 0;
long long int var_13 = -4197411623437490478LL;
unsigned char var_14 = (unsigned char)242;
unsigned long long int var_15 = 1736803787822302792ULL;
short var_16 = (short)19156;
unsigned long long int var_17 = 1943633026870767017ULL;
long long int arr_0 [14] ;
long long int arr_1 [14] ;
int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3621145041150216594LL : -9172236964485094106LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 5347414909530122392LL : 9162453116177259262LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1740112708 : 1122306844;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
