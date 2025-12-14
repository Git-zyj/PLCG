#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4176231480U;
unsigned int var_1 = 3414130161U;
unsigned char var_2 = (unsigned char)122;
unsigned int var_3 = 2568114042U;
long long int var_4 = -753758477175196455LL;
unsigned char var_5 = (unsigned char)34;
unsigned char var_6 = (unsigned char)228;
unsigned long long int var_7 = 8850056847991659139ULL;
unsigned long long int var_8 = 14741115696673774059ULL;
unsigned long long int var_9 = 2569456886394912421ULL;
unsigned long long int var_10 = 14687302027899829201ULL;
unsigned long long int var_11 = 1567710108733949037ULL;
unsigned char var_12 = (unsigned char)85;
long long int var_14 = 3736718331836830492LL;
unsigned long long int var_15 = 11425603372622802711ULL;
long long int var_16 = -4958292446126010999LL;
int zero = 0;
unsigned long long int var_17 = 5468240836354709778ULL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)11;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8294129550725827903LL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)153;
unsigned long long int var_25 = 12456304323402040320ULL;
unsigned int var_26 = 3056301725U;
unsigned long long int var_27 = 1331776197006769384ULL;
unsigned long long int var_28 = 7521146177117254924ULL;
unsigned char var_29 = (unsigned char)166;
unsigned int var_30 = 1496166064U;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 17110230U;
long long int var_33 = 6831836767211948018LL;
unsigned char var_34 = (unsigned char)58;
_Bool var_35 = (_Bool)0;
unsigned long long int var_36 = 13225816538642873873ULL;
unsigned char var_37 = (unsigned char)234;
unsigned char var_38 = (unsigned char)149;
long long int var_39 = 5716290546210464940LL;
_Bool var_40 = (_Bool)0;
unsigned long long int var_41 = 14983748519641984200ULL;
long long int var_42 = 4734050903268268089LL;
unsigned long long int var_43 = 11346013106202825684ULL;
_Bool var_44 = (_Bool)1;
unsigned char var_45 = (unsigned char)46;
unsigned int var_46 = 902329066U;
unsigned long long int var_47 = 704600026775811481ULL;
long long int var_48 = -4562200268797307531LL;
long long int var_49 = -3306911508045684034LL;
_Bool var_50 = (_Bool)0;
unsigned char var_51 = (unsigned char)203;
_Bool var_52 = (_Bool)1;
unsigned int var_53 = 4093148272U;
unsigned long long int var_54 = 14924240802206081896ULL;
unsigned int var_55 = 296887871U;
long long int var_56 = -1804190938671699463LL;
unsigned long long int var_57 = 12926589291475302591ULL;
long long int var_58 = -8065384458878752531LL;
_Bool var_59 = (_Bool)1;
unsigned char arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
long long int arr_3 [25] [25] [25] ;
_Bool arr_4 [25] [25] [25] ;
unsigned int arr_5 [25] [25] [25] ;
unsigned int arr_6 [25] [25] [25] ;
unsigned int arr_7 [25] [25] [25] [25] [25] ;
long long int arr_8 [25] [25] [25] ;
long long int arr_9 [25] [25] [25] [25] [25] ;
_Bool arr_11 [25] ;
unsigned int arr_12 [25] [25] ;
_Bool arr_13 [25] ;
long long int arr_14 [25] [25] ;
unsigned int arr_15 [25] [25] [25] ;
long long int arr_17 [25] ;
unsigned long long int arr_19 [25] [25] [25] [25] ;
unsigned int arr_20 [25] [25] [25] [25] [25] [25] ;
long long int arr_22 [25] ;
unsigned long long int arr_23 [25] [25] ;
unsigned long long int arr_24 [25] [25] ;
long long int arr_25 [25] [25] [25] [25] ;
long long int arr_27 [25] ;
unsigned long long int arr_29 [25] [25] [25] [25] [25] [25] ;
long long int arr_36 [25] [25] [25] ;
unsigned long long int arr_40 [25] [25] [25] [25] ;
unsigned char arr_41 [25] [25] [25] [25] [25] [25] [25] ;
unsigned int arr_48 [25] [25] [25] [25] ;
unsigned int arr_53 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 13929457284996887915ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -5580935953970916617LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3000840044U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2151067061U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 4158568189U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6727696191707694591LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 1249007728650321419LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 3774079983U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = -261949682356528736LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1465672681U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 4916169454996728994LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 15381883977108381040ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3295263379U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 145162791391733722LL : 4801919712220127021LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? 13258964557628767919ULL : 15712018179319197180ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 12351413874046972119ULL : 10616068742852983003ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = -5310017279561006845LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -3938023343435822162LL : 5818028384358808913LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9239217886120811623ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = -7890759941125185539LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 4471243907531634730ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 3668684945U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 2950007780U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
