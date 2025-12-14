#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3728893980825792720ULL;
short var_3 = (short)-18193;
unsigned char var_4 = (unsigned char)117;
unsigned char var_7 = (unsigned char)190;
signed char var_9 = (signed char)-78;
long long int var_12 = 6661266129717560093LL;
int zero = 0;
long long int var_13 = 2065441692387666084LL;
unsigned short var_14 = (unsigned short)5960;
unsigned long long int var_15 = 4388958593722561787ULL;
unsigned int var_16 = 326393204U;
signed char var_17 = (signed char)-40;
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
