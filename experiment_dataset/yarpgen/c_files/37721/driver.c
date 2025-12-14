#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5546740586413250293LL;
unsigned long long int var_2 = 5749590369059411815ULL;
unsigned short var_3 = (unsigned short)3936;
signed char var_4 = (signed char)-6;
unsigned long long int var_6 = 4831469705979472004ULL;
unsigned short var_9 = (unsigned short)47087;
unsigned short var_10 = (unsigned short)60637;
long long int var_11 = -4157637449948075922LL;
unsigned short var_12 = (unsigned short)5352;
unsigned int var_13 = 2413960662U;
unsigned long long int var_14 = 1805829262878056381ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)14807;
unsigned char var_18 = (unsigned char)103;
unsigned long long int var_19 = 9336855759186601647ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
