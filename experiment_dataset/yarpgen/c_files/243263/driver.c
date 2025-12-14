#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2620163702405038286LL;
unsigned long long int var_6 = 8141350375736308185ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)98;
signed char var_13 = (signed char)60;
long long int var_14 = 8395961270214404139LL;
unsigned short var_15 = (unsigned short)18748;
int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1684906048;
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
