#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
unsigned int var_1 = 1250217201U;
int var_2 = 1687494019;
unsigned int var_4 = 1822366904U;
int var_6 = 574103538;
unsigned char var_7 = (unsigned char)151;
unsigned char var_8 = (unsigned char)45;
signed char var_9 = (signed char)-63;
int zero = 0;
unsigned long long int var_10 = 13396752851887391858ULL;
long long int var_11 = -1714486334432445060LL;
unsigned long long int var_12 = 18295704607433639552ULL;
unsigned long long int var_13 = 8459370356106703809ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
