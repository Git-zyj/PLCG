#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27087;
unsigned long long int var_2 = 11389792671833587370ULL;
unsigned short var_3 = (unsigned short)35087;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 3183257647050536932ULL;
unsigned long long int var_9 = 13330682735422066608ULL;
unsigned long long int var_11 = 8445721694164864403ULL;
int zero = 0;
short var_16 = (short)-17757;
short var_17 = (short)20;
unsigned long long int var_18 = 9399619825832623627ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
