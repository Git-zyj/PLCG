#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)40;
signed char var_4 = (signed char)-25;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3835679151675785778ULL;
unsigned char var_16 = (unsigned char)104;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_19 = -1919939436;
unsigned char var_20 = (unsigned char)150;
signed char var_21 = (signed char)-115;
int var_22 = 139510507;
unsigned long long int var_23 = 6923049587995288108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
