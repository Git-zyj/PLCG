#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16973;
short var_2 = (short)-27414;
unsigned short var_3 = (unsigned short)29167;
unsigned char var_6 = (unsigned char)101;
long long int var_8 = -5822354565775802890LL;
signed char var_11 = (signed char)6;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 13740257032143613947ULL;
int zero = 0;
short var_20 = (short)-25233;
unsigned char var_21 = (unsigned char)216;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
