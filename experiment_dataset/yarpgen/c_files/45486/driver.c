#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1588618803U;
long long int var_5 = 181614377685464682LL;
long long int var_6 = 3384307895934723968LL;
signed char var_7 = (signed char)52;
short var_8 = (short)-22793;
unsigned int var_9 = 747387038U;
unsigned long long int var_11 = 4085574728966470113ULL;
int var_12 = 1503800879;
int zero = 0;
unsigned short var_16 = (unsigned short)5586;
unsigned char var_17 = (unsigned char)178;
long long int var_18 = 7988598851103621492LL;
signed char var_19 = (signed char)-82;
int var_20 = -971079272;
unsigned char arr_0 [22] ;
unsigned int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 84575919U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
