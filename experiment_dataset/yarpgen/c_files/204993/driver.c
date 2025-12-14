#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
short var_4 = (short)-10318;
unsigned char var_8 = (unsigned char)72;
unsigned long long int var_9 = 10724954132604099608ULL;
unsigned int var_12 = 3466772847U;
unsigned int var_13 = 3111142732U;
int zero = 0;
unsigned char var_17 = (unsigned char)134;
signed char var_18 = (signed char)-24;
int var_19 = -1456567920;
unsigned int var_20 = 783582507U;
int var_21 = 1358011121;
unsigned int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 2391818583U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
