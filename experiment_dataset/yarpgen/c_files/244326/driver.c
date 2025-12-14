#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
unsigned char var_2 = (unsigned char)227;
unsigned long long int var_4 = 3261793422295683962ULL;
unsigned int var_7 = 225149783U;
long long int var_9 = -8551021507842316761LL;
unsigned char var_11 = (unsigned char)146;
unsigned int var_12 = 3781419848U;
unsigned long long int var_13 = 8435499628315548789ULL;
signed char var_15 = (signed char)63;
int zero = 0;
int var_18 = 1738115698;
short var_19 = (short)26170;
unsigned long long int var_20 = 5536024108045302885ULL;
unsigned long long int var_21 = 7799896291885791528ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
