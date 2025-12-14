#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)154;
short var_3 = (short)-10243;
signed char var_4 = (signed char)-60;
signed char var_5 = (signed char)16;
_Bool var_6 = (_Bool)1;
int var_7 = -249400924;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 3542868594547598347ULL;
short var_11 = (short)-27860;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3733432514U;
signed char var_14 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
