#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
unsigned short var_1 = (unsigned short)43317;
_Bool var_2 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_14 = 4511157881375106530ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)63;
unsigned char var_19 = (unsigned char)154;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11287712402707808097ULL;
signed char var_22 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
