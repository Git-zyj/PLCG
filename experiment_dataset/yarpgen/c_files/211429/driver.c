#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26290;
unsigned int var_1 = 1522688015U;
long long int var_2 = -1775594856784267722LL;
unsigned int var_3 = 2075454309U;
long long int var_4 = 909647402862775461LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)31538;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3861700808U;
int var_12 = 1910429636;
short var_13 = (short)-13794;
unsigned char var_14 = (unsigned char)138;
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
