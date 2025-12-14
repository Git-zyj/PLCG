#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6800543343692657950LL;
unsigned short var_2 = (unsigned short)44106;
unsigned long long int var_5 = 7034331865833494019ULL;
unsigned short var_6 = (unsigned short)54577;
unsigned long long int var_8 = 15474814793249110682ULL;
unsigned long long int var_9 = 9751719171574468050ULL;
long long int var_12 = -1180788739843175628LL;
unsigned short var_14 = (unsigned short)41246;
long long int var_15 = 9011195718194285812LL;
int zero = 0;
unsigned long long int var_17 = 10154009071640106811ULL;
unsigned long long int var_18 = 3760496549257910082ULL;
long long int var_19 = 8155692982657865413LL;
unsigned short var_20 = (unsigned short)9001;
unsigned short var_21 = (unsigned short)12955;
unsigned long long int var_22 = 18198107283554039094ULL;
unsigned long long int var_23 = 17932148929093061073ULL;
unsigned short var_24 = (unsigned short)56036;
unsigned short var_25 = (unsigned short)29428;
unsigned short arr_1 [10] ;
long long int arr_2 [10] ;
long long int arr_3 [10] [10] ;
unsigned long long int arr_4 [10] ;
unsigned long long int arr_5 [10] [10] [10] ;
long long int arr_6 [10] [10] [10] ;
unsigned short arr_9 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)23369;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 6278544166311782415LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -4326458959265807891LL : -186711088360964233LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 6705415901490562554ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13792039987117483776ULL : 10926335874249914838ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3347063525465738560LL : -2816313814934192504LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)59676 : (unsigned short)160;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
