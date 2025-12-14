/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196854
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
    var_20 += ((/* implicit */unsigned long long int) (+((~((+(((/* implicit */int) (signed char)17))))))));
    var_21 = ((/* implicit */signed char) (-(var_7)));
    var_22 ^= ((/* implicit */short) (signed char)-9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_23 = arr_1 [i_0];
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (-2147483647 - 1)))));
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) % ((-(arr_0 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_2] [i_1 - 2]) == (((unsigned int) (unsigned char)122)))))) : ((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_2]))) : (8422210968542526010ULL)))))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))) : (9155934882919058621ULL)))))))));
                    }
                    for (int i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        arr_13 [i_1 + 1] [i_4 + 2] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [i_4 + 2])) | (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2] [i_4])))));
                        arr_14 [i_0] [i_1 + 1] [i_2] [i_1 - 1] = ((/* implicit */signed char) ((unsigned char) ((_Bool) arr_0 [i_0])));
                        var_27 = ((long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 144115188075855871ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_10 [i_4] [i_0])))) ^ (-2332663957751703712LL)));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_28 = min(((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [1LL] [i_0] [i_0] [i_0] [17ULL]))))))), ((!(((/* implicit */_Bool) (signed char)7)))));
                        arr_18 [i_0] [15] [i_0] [i_5] = ((/* implicit */signed char) (unsigned short)65535);
                        arr_19 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2]))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_29 ^= ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 19U)) && (((/* implicit */_Bool) (signed char)-1)))))) - (min((var_2), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))) >= (((/* implicit */unsigned long long int) ((arr_1 [i_1 - 1]) ? (((/* implicit */int) arr_21 [i_1 + 1] [i_1] [i_2] [i_6] [i_2])) : (((/* implicit */int) arr_1 [i_1 + 1]))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_12 [i_6] [i_2] [i_2] [i_1] [i_1 - 2])))))))));
                        var_31 = ((/* implicit */_Bool) var_3);
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(var_5)))), (min((arr_24 [i_1 + 1] [i_7 + 1]), (((/* implicit */unsigned int) (short)1023))))));
                        var_33 = ((/* implicit */signed char) -1LL);
                        arr_25 [i_0] [i_7] [0ULL] [(signed char)16] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_7 + 1] [i_7])), (65535))))));
                        arr_26 [i_0] [i_7] [i_2] [i_7 + 1] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_7 + 1])))));
                    }
                    var_34 += (+(((((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_2] [i_1 + 1] [16ULL])) | (((/* implicit */int) (unsigned char)165)))));
                    arr_27 [i_0] [i_1 - 1] [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_14)), (arr_24 [i_1 - 1] [i_2]))) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                }
            } 
        } 
    } 
}
