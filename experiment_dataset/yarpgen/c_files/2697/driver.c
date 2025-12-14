#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49439;
long long int var_2 = 3537560105347789963LL;
unsigned long long int var_3 = 2914077384438222255ULL;
unsigned long long int var_4 = 246278653322403492ULL;
signed char var_7 = (signed char)16;
signed char var_8 = (signed char)117;
short var_9 = (short)-6355;
int var_11 = 132426187;
int zero = 0;
unsigned char var_12 = (unsigned char)219;
unsigned long long int var_13 = 9807238756185966342ULL;
unsigned short var_14 = (unsigned short)4623;
short var_15 = (short)-10376;
unsigned long long int var_16 = 15086638459929607900ULL;
unsigned long long int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 11526184554812404696ULL;
}

void checksum() {
    hash(&seed, var_12);
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
