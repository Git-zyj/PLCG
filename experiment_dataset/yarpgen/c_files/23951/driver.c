#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3821556632259444155LL;
long long int var_7 = -3117772206116480360LL;
long long int var_8 = -7833443932659045544LL;
signed char var_11 = (signed char)-118;
signed char var_12 = (signed char)-27;
_Bool var_13 = (_Bool)1;
int var_14 = 1697005722;
unsigned short var_17 = (unsigned short)36506;
int zero = 0;
unsigned char var_18 = (unsigned char)197;
unsigned int var_19 = 1036528454U;
unsigned short var_20 = (unsigned short)6195;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
