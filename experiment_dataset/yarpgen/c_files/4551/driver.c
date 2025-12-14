#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
signed char var_8 = (signed char)-29;
signed char var_9 = (signed char)-29;
unsigned long long int var_10 = 3977415479819854763ULL;
long long int var_11 = -8816692715721733759LL;
unsigned int var_14 = 2072649329U;
signed char var_15 = (signed char)-38;
int zero = 0;
unsigned long long int var_16 = 8610963915015054445ULL;
unsigned short var_17 = (unsigned short)57594;
unsigned long long int var_18 = 12921742325372500896ULL;
long long int var_19 = -4122941706085649908LL;
unsigned char var_20 = (unsigned char)43;
signed char var_21 = (signed char)41;
unsigned short var_22 = (unsigned short)11215;
unsigned short arr_1 [21] ;
signed char arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)46955;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-87;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
