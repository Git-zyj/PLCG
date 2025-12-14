#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
long long int var_4 = -4848751820125037689LL;
int var_5 = -1981451863;
signed char var_6 = (signed char)-124;
short var_9 = (short)-28757;
int var_10 = -2090686690;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_19 = 1130350003;
unsigned int var_20 = 3200349797U;
unsigned int var_21 = 3077731222U;
void init() {
}

void checksum() {
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
