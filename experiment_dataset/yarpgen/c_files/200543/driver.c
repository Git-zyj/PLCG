#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9089;
signed char var_4 = (signed char)12;
unsigned long long int var_5 = 15628147135595562051ULL;
short var_6 = (short)-4601;
unsigned int var_8 = 1923066965U;
short var_9 = (short)9845;
unsigned char var_11 = (unsigned char)116;
long long int var_13 = -4812129489255167730LL;
int zero = 0;
int var_16 = -1188509051;
signed char var_17 = (signed char)104;
signed char var_18 = (signed char)-121;
signed char var_19 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
