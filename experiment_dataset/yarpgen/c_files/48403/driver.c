#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 982268871U;
unsigned int var_2 = 1223151248U;
unsigned int var_7 = 3581114210U;
signed char var_8 = (signed char)-10;
int zero = 0;
unsigned int var_10 = 82431529U;
unsigned char var_11 = (unsigned char)119;
unsigned long long int var_12 = 2277648161269071219ULL;
short var_13 = (short)-28154;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
