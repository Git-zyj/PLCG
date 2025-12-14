#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6268022458094492024LL;
long long int var_3 = 2033680921844545698LL;
unsigned int var_6 = 2115046265U;
unsigned int var_7 = 1249113786U;
unsigned int var_9 = 287720786U;
unsigned int var_10 = 621608303U;
long long int var_12 = 17900234273900472LL;
long long int var_15 = -2895416490190959667LL;
unsigned int var_17 = 1541363206U;
int zero = 0;
unsigned int var_18 = 691124139U;
long long int var_19 = -3861538819939337620LL;
unsigned int var_20 = 390288926U;
unsigned int var_21 = 44526219U;
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
