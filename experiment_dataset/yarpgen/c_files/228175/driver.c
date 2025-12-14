#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1914632655100829087LL;
long long int var_2 = 5160342047577484231LL;
int var_3 = -2074838819;
unsigned long long int var_4 = 4908693785412515170ULL;
unsigned short var_5 = (unsigned short)51318;
long long int var_6 = 446137579903878050LL;
int var_7 = -330543025;
signed char var_8 = (signed char)-44;
int zero = 0;
long long int var_15 = 6439755875250515009LL;
unsigned int var_16 = 3480936199U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
