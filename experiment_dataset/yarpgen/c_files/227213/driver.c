#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1842672932698862877LL;
unsigned char var_7 = (unsigned char)27;
unsigned char var_10 = (unsigned char)164;
unsigned long long int var_12 = 15385552555127675027ULL;
int zero = 0;
long long int var_20 = -7137246616147965106LL;
unsigned short var_21 = (unsigned short)21810;
long long int var_22 = -7129104471062103747LL;
int var_23 = -1830111831;
unsigned int var_24 = 1124977205U;
unsigned short var_25 = (unsigned short)4831;
unsigned int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 154757838U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
