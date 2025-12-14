#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-106;
unsigned int var_7 = 2667406464U;
unsigned char var_8 = (unsigned char)100;
unsigned int var_9 = 1040729545U;
unsigned int var_10 = 2169314757U;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)57740;
unsigned long long int var_17 = 4089122494163704779ULL;
int zero = 0;
unsigned int var_18 = 4068930218U;
signed char var_19 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
