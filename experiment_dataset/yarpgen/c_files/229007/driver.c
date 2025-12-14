#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3888210290U;
unsigned long long int var_2 = 13786648303559682604ULL;
unsigned int var_3 = 299148102U;
unsigned int var_4 = 3428073017U;
unsigned int var_5 = 1219350642U;
unsigned int var_13 = 2405198409U;
unsigned long long int var_14 = 15598559718830703265ULL;
unsigned int var_16 = 2378433256U;
int zero = 0;
unsigned long long int var_18 = 15623211082922517293ULL;
unsigned int var_19 = 2477259276U;
unsigned long long int var_20 = 17525375414501018405ULL;
unsigned long long int var_21 = 11017137588142747640ULL;
unsigned long long int var_22 = 13376049193240865001ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
