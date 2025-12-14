#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3335;
unsigned long long int var_1 = 7070637281722243069ULL;
unsigned long long int var_2 = 4899715803323243060ULL;
int var_3 = -30297428;
long long int var_4 = 1509505706815448373LL;
int var_7 = 730195139;
unsigned char var_8 = (unsigned char)168;
unsigned char var_9 = (unsigned char)80;
int zero = 0;
unsigned char var_10 = (unsigned char)75;
int var_11 = -82709448;
unsigned long long int var_12 = 5109727770596394745ULL;
unsigned char var_13 = (unsigned char)21;
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
