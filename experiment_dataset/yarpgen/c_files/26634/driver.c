#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
unsigned long long int var_1 = 17907110564755941940ULL;
unsigned long long int var_6 = 6032866654510861224ULL;
unsigned long long int var_8 = 1088383465777674625ULL;
unsigned long long int var_9 = 15997829690117654194ULL;
unsigned char var_14 = (unsigned char)196;
signed char var_17 = (signed char)-89;
int zero = 0;
short var_18 = (short)16208;
unsigned long long int var_19 = 11123302607915481209ULL;
unsigned char var_20 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
