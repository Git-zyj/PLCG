#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned char var_1 = (unsigned char)235;
int var_3 = -2024919135;
int var_5 = 605665936;
unsigned long long int var_8 = 12029750383847603732ULL;
signed char var_9 = (signed char)-107;
long long int var_13 = 6426599434866470733LL;
short var_14 = (short)-1952;
signed char var_15 = (signed char)-110;
int zero = 0;
unsigned int var_18 = 333875256U;
signed char var_19 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
