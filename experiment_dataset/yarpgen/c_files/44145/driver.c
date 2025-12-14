#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)54;
unsigned int var_3 = 1421270940U;
signed char var_6 = (signed char)-67;
long long int var_7 = 2204622523713556512LL;
unsigned short var_8 = (unsigned short)36356;
int var_9 = 273890038;
int zero = 0;
int var_10 = -850832671;
unsigned int var_11 = 2973849089U;
signed char var_12 = (signed char)-54;
signed char var_13 = (signed char)113;
short var_14 = (short)5447;
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
