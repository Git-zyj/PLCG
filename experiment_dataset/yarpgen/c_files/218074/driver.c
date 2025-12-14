#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43786;
_Bool var_3 = (_Bool)1;
int var_8 = 107406042;
long long int var_11 = -1271750163857743920LL;
unsigned char var_13 = (unsigned char)126;
int zero = 0;
int var_14 = 248885729;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
