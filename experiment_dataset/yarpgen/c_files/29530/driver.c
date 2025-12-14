#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -8897118993762585011LL;
unsigned short var_11 = (unsigned short)63898;
unsigned int var_12 = 2928371505U;
long long int var_16 = 9157307519287792793LL;
unsigned char var_18 = (unsigned char)162;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)24902;
signed char var_22 = (signed char)-27;
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
