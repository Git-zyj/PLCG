#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -578426569020882745LL;
unsigned int var_8 = 2882881820U;
signed char var_9 = (signed char)-67;
unsigned short var_11 = (unsigned short)63705;
signed char var_14 = (signed char)-95;
unsigned char var_17 = (unsigned char)217;
unsigned char var_18 = (unsigned char)140;
unsigned char var_19 = (unsigned char)182;
int zero = 0;
long long int var_20 = -3720936572359286210LL;
unsigned long long int var_21 = 9467567123100636508ULL;
unsigned int var_22 = 2494064141U;
unsigned char var_23 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
