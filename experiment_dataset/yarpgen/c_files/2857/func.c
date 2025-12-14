/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2857
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [(unsigned char)23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)48467)) ? (7743003935460229008LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        var_11 *= (unsigned short)24026;
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 15175813019782969765ULL)) ? ((+(((/* implicit */int) (unsigned char)23)))) : (((/* implicit */int) var_0))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 4; i_4 < 23; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3270931053926581856ULL)) ? (2111536167) : (((/* implicit */int) (short)23548))));
                            arr_16 [i_0] [i_3] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 15175813019782969765ULL)) ? (var_2) : (((/* implicit */unsigned long long int) 32U)))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25080)) % (((/* implicit */int) (unsigned short)42688)))))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned short) var_6);
                            var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 4] [i_3 + 4]))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) arr_1 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2])))));
                            arr_23 [i_0] [i_1] [i_1] [i_0] [i_3 - 1] [i_6] = ((((/* implicit */_Bool) 4170662647U)) ? (((((/* implicit */_Bool) 1050670714U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)9564)) * (((/* implicit */int) var_0))))));
                            var_15 = ((/* implicit */long long int) ((3247161365U) == ((-(3244296582U)))));
                        }
                    }
                    for (long long int i_7 = 2; i_7 < 24; i_7 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) (unsigned short)65522);
                        var_17 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)69)))) != ((~(((/* implicit */int) (unsigned char)194))))));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2620278269519051242ULL)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)165))))) != (arr_5 [i_8 + 1] [i_8 + 3] [i_8 + 3])));
                        arr_30 [i_0] [i_0] [i_0] [13ULL] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_13 [0LL] [0LL] [i_1] [i_8 + 1])) << (((((/* implicit */int) arr_21 [i_2] [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 3])) - (25606)))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)27))))) / (1047805926U)));
                    }
                    for (signed char i_9 = 3; i_9 < 24; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) arr_21 [(unsigned short)24] [(unsigned short)24] [(unsigned char)3] [(unsigned char)3] [i_9]))))));
                        var_21 = ((/* implicit */short) (((-(((/* implicit */int) var_3)))) * (((/* implicit */int) var_0))));
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_11 [i_0] [i_1] [i_0] [3U] [i_0]))))));
                    }
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6538168125176530042ULL)) ? (((var_0) ? (3244296584U) : (((/* implicit */unsigned int) var_7)))) : (1230408230U)))) ? (3270931053926581861ULL) : (((/* implicit */unsigned long long int) ((arr_25 [i_10] [i_1] [i_0] [i_10] [i_10]) % (((/* implicit */int) (unsigned short)42688))))));
                    arr_35 [i_1] [i_0] = ((/* implicit */unsigned short) max(((-(arr_10 [18ULL] [18ULL] [i_1] [i_10]))), ((((+(arr_7 [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) & (((/* implicit */int) var_8)))) ^ (((/* implicit */int) (unsigned short)59147))));
                    arr_36 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 344197321)), (arr_5 [i_0] [i_1] [i_10])))) ? ((+(arr_25 [i_0] [i_0] [i_1] [i_1] [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-30515)), (-344197322)))) || ((!(((/* implicit */_Bool) (unsigned char)14)))))))));
                    var_25 ^= ((/* implicit */unsigned int) var_7);
                }
                var_26 ^= ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) (!(var_0)))), (arr_12 [i_0] [i_0] [i_0] [2U] [2U])))));
                arr_37 [(unsigned char)19] [i_0] = var_10;
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)136))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (-2062455769) : (((/* implicit */int) (unsigned short)22848))))) : (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)50516)) ? (12783237434663916990ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42689))) : (2217202756U))))))) ? (((((/* implicit */_Bool) (+(var_7)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-63)) ? (var_7) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) (_Bool)1))));
}
