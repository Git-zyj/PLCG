#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37372;
unsigned short var_7 = (unsigned short)26127;
long long int var_9 = 614329439569310932LL;
int zero = 0;
unsigned long long int var_10 = 16584791287790812617ULL;
unsigned short var_11 = (unsigned short)46105;
unsigned short var_12 = (unsigned short)50625;
int arr_0 [10] ;
long long int arr_1 [10] ;
long long int arr_4 [10] ;
unsigned long long int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1554587947;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -7433036031013474774LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3117939896903234965LL : 4148440610853834281LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 4232871874562101865ULL : 8901185048502925898ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
