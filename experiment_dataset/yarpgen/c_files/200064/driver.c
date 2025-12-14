#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 16985416091085585635ULL;
unsigned short var_8 = (unsigned short)14093;
unsigned long long int var_9 = 17218385477363638914ULL;
unsigned char var_11 = (unsigned char)96;
_Bool var_16 = (_Bool)0;
int var_18 = -1327225429;
int zero = 0;
signed char var_19 = (signed char)51;
int var_20 = -323522182;
unsigned short var_21 = (unsigned short)31058;
void init() {
}

void checksum() {
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
