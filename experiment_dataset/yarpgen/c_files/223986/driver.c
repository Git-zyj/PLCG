#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned long long int var_1 = 10031606169865306721ULL;
unsigned long long int var_2 = 7485680220726769846ULL;
unsigned short var_6 = (unsigned short)47744;
unsigned long long int var_8 = 14578027673095294247ULL;
unsigned short var_9 = (unsigned short)46515;
signed char var_12 = (signed char)-58;
signed char var_14 = (signed char)-29;
int zero = 0;
short var_15 = (short)-20696;
signed char var_16 = (signed char)-54;
signed char var_17 = (signed char)-14;
short var_18 = (short)29584;
unsigned long long int var_19 = 17770774309886033839ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
