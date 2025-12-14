#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-26305;
long long int var_13 = 5394294622557109882LL;
unsigned int var_14 = 2109405299U;
long long int var_15 = -4659327642043270671LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 16698249561064363701ULL;
unsigned char var_18 = (unsigned char)155;
long long int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4687219069168637074LL : 2039857823075773067LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
