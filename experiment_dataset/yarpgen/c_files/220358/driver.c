#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
signed char var_3 = (signed char)-111;
long long int var_4 = 6469041036217407893LL;
int var_6 = 448910517;
int zero = 0;
long long int var_12 = 8263431107710603207LL;
unsigned short var_13 = (unsigned short)4159;
signed char var_14 = (signed char)-56;
signed char var_15 = (signed char)121;
long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -7556905145696966426LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
