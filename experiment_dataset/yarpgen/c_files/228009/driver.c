#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1809157330;
unsigned long long int var_2 = 5675605868362650681ULL;
_Bool var_3 = (_Bool)1;
long long int var_5 = 8181936272868022694LL;
int var_7 = 1646949931;
int var_8 = 380846815;
unsigned long long int var_9 = 6150410280017829536ULL;
int zero = 0;
long long int var_10 = 634992583632521289LL;
unsigned char var_11 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
