#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27600;
long long int var_1 = -1274864560111056230LL;
unsigned long long int var_2 = 14193223667922071788ULL;
short var_4 = (short)3217;
long long int var_5 = 9087141372743938671LL;
unsigned long long int var_6 = 12324936026150797693ULL;
long long int var_7 = 417584901057492481LL;
int zero = 0;
short var_10 = (short)-9475;
short var_11 = (short)27716;
signed char var_12 = (signed char)60;
int var_13 = 790120564;
unsigned short var_14 = (unsigned short)62861;
unsigned long long int var_15 = 16148248559704857931ULL;
unsigned short var_16 = (unsigned short)48152;
unsigned short var_17 = (unsigned short)46515;
signed char var_18 = (signed char)38;
unsigned long long int arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 18157415282083337408ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 4166406563612104079ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-12569;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
