#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5366340770524527772LL;
long long int var_3 = 8657081345328880602LL;
int var_4 = -1825863320;
short var_5 = (short)-27773;
int var_6 = -421253448;
signed char var_7 = (signed char)-58;
int var_9 = 682238636;
int zero = 0;
long long int var_11 = -2740280561393103856LL;
short var_12 = (short)29942;
short var_13 = (short)927;
void init() {
}

void checksum() {
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
