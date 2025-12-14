/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247263
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
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) arr_0 [i_0]);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(arr_1 [i_0 + 2] [i_0 - 3]))))));
        var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) (+(arr_0 [i_0 - 2]))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_0 [i_1]) : (((((/* implicit */int) arr_2 [i_1 + 4] [i_1])) / (arr_3 [i_1 + 4])))));
        arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((+(arr_0 [i_1]))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) >> ((((+(arr_3 [i_1 - 1]))) - (734705035)))))));
        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) || (((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 4])))))));
    }
    for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */int) (((!((!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2])) ? (arr_6 [i_2] [i_2]) : (((arr_6 [i_2] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2]))))))));
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((((arr_5 [i_2]) ? (((arr_6 [i_2] [i_2]) % (arr_6 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))))))));
        var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_2 - 3] [i_2])) ? (arr_6 [i_2 - 3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) arr_6 [(unsigned char)6] [0LL])) ? ((+(arr_6 [i_2 + 1] [14LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 2] [18U]))))))))));
        arr_9 [i_2] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [i_2]))))))) ? (((arr_6 [i_2 - 3] [i_2]) | (arr_6 [i_2] [i_2]))) : (arr_6 [i_2 - 1] [i_2]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_14 [i_3] [i_4] = ((/* implicit */unsigned int) (-(arr_13 [i_3 - 1])));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                arr_17 [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_5 [i_4]);
                arr_18 [i_5] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 - 2])) ? (((/* implicit */int) arr_11 [i_3 - 1])) : (((/* implicit */int) arr_11 [i_3 - 1]))));
                arr_19 [i_3] [12LL] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5 + 2] [i_3 - 1]))) != (arr_16 [i_5 + 1])));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned int i_7 = 2; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) (~(arr_13 [i_3])));
                            var_27 = ((/* implicit */int) min((var_27), ((-((+(arr_3 [i_4])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    arr_29 [4U] [i_4] [i_5] [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_13 [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3 - 1] [11] [i_4] [i_5] [i_5] [i_8])))))));
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_5 + 2])) && (((/* implicit */_Bool) arr_12 [i_3 - 1] [i_5 + 1]))));
                    var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_25 [i_8] [i_5 + 2] [i_5] [i_8] [i_3 - 1]))));
                }
            }
            arr_30 [i_4] [i_3 - 2] [i_3 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_4] [i_4] [i_3] [i_3] [i_3]))));
            arr_31 [i_3] [i_3] [8U] = ((/* implicit */unsigned short) (~(arr_27 [i_3] [i_4] [i_3 - 1] [i_4] [i_4] [i_3 + 1])));
        }
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_24 [i_3 - 2])) / (arr_1 [i_3 - 2] [i_3 - 2])));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3 - 1])) && (((/* implicit */_Bool) arr_16 [i_3 - 1]))));
        arr_32 [i_3 - 1] [i_3] = ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 + 1])) ? (arr_12 [i_3] [i_3 - 2]) : (arr_12 [i_3] [i_3 + 1]));
        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_3] [i_3 - 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (arr_13 [i_3 - 1]))))));
    }
    var_33 = ((/* implicit */long long int) var_0);
}
