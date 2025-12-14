#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
unsigned char var_2 = (unsigned char)213;
unsigned char var_3 = (unsigned char)170;
unsigned char var_4 = (unsigned char)152;
unsigned long long int var_5 = 5696738754200606205ULL;
short var_6 = (short)27639;
short var_8 = (short)13600;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 72796957;
unsigned short var_12 = (unsigned short)5184;
unsigned long long int var_13 = 16746871953949259899ULL;
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
