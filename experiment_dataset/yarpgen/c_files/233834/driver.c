#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19043;
signed char var_1 = (signed char)-92;
long long int var_2 = -4529720215281317326LL;
unsigned int var_3 = 1436964360U;
long long int var_5 = 5097385545850457273LL;
long long int var_7 = 8156484886658764696LL;
unsigned int var_8 = 1210066681U;
signed char var_9 = (signed char)108;
int zero = 0;
long long int var_11 = 7404629418858562754LL;
int var_12 = 1978525816;
signed char var_13 = (signed char)-11;
unsigned short var_14 = (unsigned short)39132;
void init() {
}

void checksum() {
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
