#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5065811652824368459LL;
int var_2 = -1381400370;
unsigned char var_4 = (unsigned char)126;
unsigned char var_9 = (unsigned char)77;
signed char var_12 = (signed char)-95;
unsigned int var_13 = 1430449690U;
long long int var_18 = 2183218432981424862LL;
int zero = 0;
int var_20 = -1340317590;
unsigned short var_21 = (unsigned short)40532;
unsigned long long int var_22 = 5506751039090410372ULL;
short var_23 = (short)20966;
long long int var_24 = -8518289352049211149LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
