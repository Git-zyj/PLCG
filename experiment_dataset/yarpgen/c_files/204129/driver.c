#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3465;
unsigned int var_1 = 3313607813U;
long long int var_2 = 7969698904925975755LL;
unsigned short var_3 = (unsigned short)15967;
signed char var_4 = (signed char)-74;
int var_5 = -88036856;
unsigned int var_6 = 1213368013U;
signed char var_7 = (signed char)-127;
short var_9 = (short)18895;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 17815888951245594677ULL;
unsigned short var_12 = (unsigned short)21451;
unsigned char var_13 = (unsigned char)64;
int var_14 = 738376683;
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
