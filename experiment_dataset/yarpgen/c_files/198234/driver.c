#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22937;
unsigned long long int var_3 = 8238790425156776515ULL;
short var_6 = (short)32146;
long long int var_8 = 3501061938268193703LL;
long long int var_10 = -7315213976188848174LL;
unsigned int var_15 = 1843542272U;
long long int var_17 = -1705113911716350577LL;
int zero = 0;
unsigned short var_18 = (unsigned short)49072;
long long int var_19 = -2426670821450444444LL;
unsigned long long int var_20 = 10334937812220026145ULL;
unsigned long long int var_21 = 9460769690380800670ULL;
signed char var_22 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
