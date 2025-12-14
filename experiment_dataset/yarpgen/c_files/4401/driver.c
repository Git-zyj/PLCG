#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8345395015864151128ULL;
unsigned long long int var_2 = 4528426301246911858ULL;
unsigned long long int var_3 = 6481101322058139964ULL;
unsigned short var_5 = (unsigned short)54557;
short var_9 = (short)21242;
unsigned short var_10 = (unsigned short)25463;
int zero = 0;
unsigned long long int var_13 = 17933951420787281612ULL;
short var_14 = (short)24946;
unsigned long long int var_15 = 11678322023763355174ULL;
unsigned long long int var_16 = 11629287867810811754ULL;
unsigned int var_17 = 441003793U;
short arr_0 [16] ;
short arr_1 [16] ;
unsigned long long int arr_6 [16] [16] [16] ;
unsigned long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-15924;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)6637;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 326969022679908563ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 16879709381786367427ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
