#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1705507608257115304LL;
signed char var_1 = (signed char)86;
int var_3 = -1370969739;
signed char var_4 = (signed char)9;
long long int var_5 = -7543977621465720621LL;
signed char var_6 = (signed char)-87;
signed char var_9 = (signed char)89;
long long int var_13 = 4120476399279467856LL;
int zero = 0;
signed char var_19 = (signed char)93;
unsigned short var_20 = (unsigned short)36738;
unsigned char var_21 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
