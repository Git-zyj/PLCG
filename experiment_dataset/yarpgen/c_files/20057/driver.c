#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1301305824U;
unsigned long long int var_2 = 11217901490787034104ULL;
unsigned long long int var_3 = 12606848317661078221ULL;
unsigned char var_4 = (unsigned char)49;
unsigned long long int var_8 = 1337343061557946564ULL;
unsigned char var_9 = (unsigned char)159;
unsigned char var_10 = (unsigned char)239;
int var_14 = -1937731546;
signed char var_15 = (signed char)-84;
unsigned long long int var_16 = 7998468938417712470ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)68;
short var_19 = (short)-29182;
long long int var_20 = -2315551311344167410LL;
unsigned char var_21 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
