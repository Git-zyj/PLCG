#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21350;
int var_1 = -847186767;
long long int var_2 = 1375535348557545444LL;
unsigned int var_4 = 196855708U;
unsigned long long int var_5 = 1595169185701930832ULL;
long long int var_6 = 4707016396726597589LL;
unsigned long long int var_8 = 17145492342414399281ULL;
unsigned long long int var_9 = 9830196310250784082ULL;
unsigned long long int var_10 = 12872692947480293832ULL;
int var_11 = -1658110719;
unsigned int var_12 = 1763283779U;
int zero = 0;
signed char var_13 = (signed char)-125;
unsigned short var_14 = (unsigned short)45060;
unsigned char var_15 = (unsigned char)183;
unsigned char var_16 = (unsigned char)13;
unsigned long long int var_17 = 16077847813955690568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
