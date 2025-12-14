#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14667466081816086926ULL;
int var_2 = 1415939452;
unsigned char var_3 = (unsigned char)185;
signed char var_5 = (signed char)13;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)63845;
unsigned long long int var_9 = 11169074509801657414ULL;
int zero = 0;
unsigned long long int var_10 = 11446725550615495548ULL;
signed char var_11 = (signed char)106;
unsigned char var_12 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
