#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)161;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3859530027U;
long long int var_8 = 6850126893593667910LL;
unsigned long long int var_9 = 5929807132169318145ULL;
unsigned char var_11 = (unsigned char)111;
signed char var_13 = (signed char)71;
int zero = 0;
long long int var_17 = -6610710993195964719LL;
signed char var_18 = (signed char)-82;
unsigned int var_19 = 3604503570U;
unsigned long long int var_20 = 10314625717254416119ULL;
unsigned int var_21 = 2125118745U;
void init() {
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
