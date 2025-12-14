#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9745793690347135940ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)104;
unsigned short var_6 = (unsigned short)5204;
long long int var_7 = 9060415223202837493LL;
signed char var_9 = (signed char)-46;
unsigned short var_10 = (unsigned short)27193;
int zero = 0;
signed char var_11 = (signed char)98;
unsigned char var_12 = (unsigned char)32;
unsigned int var_13 = 1870847873U;
void init() {
}

void checksum() {
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
