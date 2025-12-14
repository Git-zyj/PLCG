#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4113198502U;
unsigned long long int var_1 = 9689983820466897026ULL;
unsigned int var_3 = 3766121263U;
short var_6 = (short)-8284;
unsigned long long int var_7 = 8345151698550642201ULL;
unsigned long long int var_9 = 821091501799913630ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)2254;
unsigned long long int var_14 = 14032927102902861906ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
