#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3616697502U;
unsigned long long int var_4 = 2065490866281896720ULL;
unsigned char var_6 = (unsigned char)139;
unsigned long long int var_8 = 10990945499537144429ULL;
unsigned int var_10 = 855677375U;
unsigned long long int var_11 = 5568649719007829909ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 451074476;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2800877710656256088LL : -5818610367649362669LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
