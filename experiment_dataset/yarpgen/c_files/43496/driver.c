#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3733636674160862051LL;
long long int var_7 = 3548686551287710721LL;
unsigned int var_9 = 2507546926U;
signed char var_12 = (signed char)-103;
unsigned char var_13 = (unsigned char)117;
short var_14 = (short)-18354;
signed char var_16 = (signed char)-28;
int zero = 0;
long long int var_17 = 1903170508413558081LL;
unsigned short var_18 = (unsigned short)23949;
long long int var_19 = -7308557556811518374LL;
unsigned long long int var_20 = 3391613437326972101ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
