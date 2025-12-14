#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1389368047744806772ULL;
unsigned char var_2 = (unsigned char)71;
unsigned long long int var_4 = 10702018200229520399ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 6831542128844311411LL;
signed char var_8 = (signed char)-119;
long long int var_9 = 5313193465451998448LL;
short var_10 = (short)-27530;
int zero = 0;
unsigned long long int var_11 = 10497868298833027871ULL;
short var_12 = (short)-10330;
unsigned int var_13 = 1782149126U;
void init() {
}

void checksum() {
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
