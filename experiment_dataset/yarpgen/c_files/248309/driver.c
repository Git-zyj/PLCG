#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15443;
short var_2 = (short)-1097;
short var_4 = (short)-27242;
long long int var_5 = -3891322499221732066LL;
long long int var_6 = 6818495406071515280LL;
short var_7 = (short)20656;
long long int var_8 = -7532246484421960900LL;
unsigned int var_9 = 883422058U;
long long int var_10 = -8539528072131289123LL;
unsigned int var_11 = 640704195U;
long long int var_12 = -8351840302923434080LL;
int var_13 = 805277968;
short var_14 = (short)-9828;
long long int var_15 = 6342033341076224041LL;
short var_16 = (short)22961;
int zero = 0;
unsigned int var_17 = 35138501U;
short var_18 = (short)-25071;
long long int var_19 = 2066281355266316678LL;
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
