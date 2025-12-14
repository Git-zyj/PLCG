#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
long long int var_1 = 8671060845860916802LL;
signed char var_9 = (signed char)89;
int zero = 0;
long long int var_10 = -7679803988781625804LL;
unsigned char var_11 = (unsigned char)151;
unsigned short var_12 = (unsigned short)34647;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1073132688U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
