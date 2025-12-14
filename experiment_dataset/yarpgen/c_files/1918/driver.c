#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47880;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 7448493219946112485ULL;
long long int var_8 = -9181629630174739696LL;
unsigned long long int var_9 = 3178680871242077131ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)11794;
signed char var_20 = (signed char)4;
unsigned char var_21 = (unsigned char)46;
int var_22 = -1415473119;
void init() {
}

void checksum() {
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
