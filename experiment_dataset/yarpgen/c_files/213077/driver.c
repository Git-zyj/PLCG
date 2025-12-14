#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4064063244065489129ULL;
unsigned long long int var_7 = 14330690861364988027ULL;
unsigned long long int var_8 = 4412867722994129559ULL;
unsigned long long int var_9 = 664167721009279762ULL;
unsigned long long int var_10 = 15934421932816212477ULL;
unsigned long long int var_15 = 12506698674414542637ULL;
int zero = 0;
unsigned long long int var_17 = 12015457646519020331ULL;
unsigned long long int var_18 = 2755188938314919786ULL;
unsigned long long int var_19 = 5179088624638218701ULL;
unsigned long long int var_20 = 11943915898483133150ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
