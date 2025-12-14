#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)25;
unsigned int var_4 = 372539636U;
signed char var_8 = (signed char)-55;
short var_9 = (short)23882;
unsigned int var_10 = 2070862337U;
long long int var_12 = 1013644072582659587LL;
int zero = 0;
signed char var_20 = (signed char)-107;
long long int var_21 = -440340351254903124LL;
short var_22 = (short)27001;
signed char var_23 = (signed char)57;
signed char var_24 = (signed char)-47;
unsigned char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)103;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
