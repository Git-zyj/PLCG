#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned long long int var_1 = 3469385341835014026ULL;
unsigned char var_4 = (unsigned char)156;
unsigned int var_6 = 102442004U;
_Bool var_11 = (_Bool)0;
int var_12 = -1947140560;
unsigned short var_13 = (unsigned short)24047;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1122938868039213058LL;
int zero = 0;
short var_18 = (short)-31027;
unsigned int var_19 = 3216998994U;
unsigned char var_20 = (unsigned char)174;
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
