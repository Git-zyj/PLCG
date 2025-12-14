#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11364522153141812020ULL;
unsigned long long int var_2 = 11975233883166807851ULL;
unsigned long long int var_3 = 13903958875865580352ULL;
unsigned long long int var_5 = 13656746855437479605ULL;
unsigned long long int var_7 = 17164182756930438094ULL;
unsigned long long int var_11 = 12061435523253533442ULL;
unsigned long long int var_12 = 12597443206027299471ULL;
int zero = 0;
unsigned long long int var_13 = 15048141912399735846ULL;
unsigned long long int var_14 = 14479987907483911331ULL;
unsigned long long int var_15 = 413457659634325541ULL;
unsigned long long int var_16 = 1696692700095612016ULL;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1538716488180635696ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 11378810661528574672ULL;
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
