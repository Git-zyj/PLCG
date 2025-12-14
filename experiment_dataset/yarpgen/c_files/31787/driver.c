#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4551564104607767033LL;
signed char var_1 = (signed char)50;
unsigned long long int var_4 = 6190117022515445136ULL;
int var_6 = -1201420946;
unsigned char var_7 = (unsigned char)159;
int var_8 = -1340670387;
unsigned char var_10 = (unsigned char)182;
short var_12 = (short)-27189;
unsigned int var_13 = 3300242451U;
int var_14 = 2058586381;
int zero = 0;
signed char var_20 = (signed char)-76;
int var_21 = 428233945;
unsigned long long int var_22 = 10345937453732218301ULL;
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
