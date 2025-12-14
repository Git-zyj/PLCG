#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19980;
unsigned char var_5 = (unsigned char)156;
unsigned short var_7 = (unsigned short)7745;
unsigned short var_10 = (unsigned short)6366;
int zero = 0;
unsigned short var_11 = (unsigned short)27687;
int var_12 = -913847594;
unsigned short var_13 = (unsigned short)45697;
unsigned char var_14 = (unsigned char)207;
unsigned long long int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 14369330054406249170ULL;
}

void checksum() {
    hash(&seed, var_11);
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
