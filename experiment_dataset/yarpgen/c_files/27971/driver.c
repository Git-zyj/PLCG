#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2338351642U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = 9021901149806442666LL;
long long int var_7 = -8944592915878889141LL;
short var_9 = (short)-27253;
unsigned char var_12 = (unsigned char)102;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)7;
unsigned long long int var_18 = 9873023532354502324ULL;
long long int var_19 = 2338623998739611321LL;
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
