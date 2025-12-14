#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 463182154U;
int var_5 = -321202838;
signed char var_8 = (signed char)-94;
unsigned long long int var_9 = 8079203795096201845ULL;
unsigned long long int var_12 = 14673593187884367576ULL;
unsigned int var_17 = 2349959872U;
short var_18 = (short)5838;
signed char var_19 = (signed char)-25;
int zero = 0;
unsigned char var_20 = (unsigned char)104;
unsigned char var_21 = (unsigned char)74;
unsigned long long int var_22 = 16481224655560592360ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
