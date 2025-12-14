#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15500712140921061556ULL;
signed char var_1 = (signed char)-55;
long long int var_2 = -4862709583905614049LL;
unsigned int var_3 = 1268600562U;
short var_4 = (short)565;
unsigned short var_5 = (unsigned short)36178;
unsigned long long int var_6 = 6355696889324283997ULL;
signed char var_7 = (signed char)-46;
signed char var_9 = (signed char)74;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -775159209;
unsigned short var_12 = (unsigned short)60227;
unsigned short var_13 = (unsigned short)6241;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
