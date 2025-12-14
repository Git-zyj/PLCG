#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-76;
long long int var_3 = 2764363170031230630LL;
_Bool var_5 = (_Bool)0;
int var_11 = 380263632;
int zero = 0;
unsigned short var_12 = (unsigned short)63204;
signed char var_13 = (signed char)-71;
unsigned char var_14 = (unsigned char)51;
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
