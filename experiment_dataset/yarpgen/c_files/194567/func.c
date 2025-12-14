/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194567
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_9)));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [15ULL])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 131070U)) : (70368744177663ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        var_18 = (!(arr_1 [13]));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */int) arr_1 [13U])) : ((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) arr_1 [i_1]);
        arr_5 [3LL] = ((/* implicit */signed char) var_16);
        arr_6 [4ULL] = arr_3 [(_Bool)1] [i_1];
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_11 [1] = ((/* implicit */unsigned char) ((arr_9 [i_2]) != (((((/* implicit */_Bool) (short)-22856)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_9 [i_2])))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_1)));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_21 [i_2] [i_5] [i_4] [(short)11] [i_4] [1U] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_6)) | (var_14))) + (2147483647))) << (((((/* implicit */int) arr_0 [i_4 - 1])) - (30562)))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                        arr_22 [i_4 - 1] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_0 [i_4 - 1]))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((1953918103U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6]))))) >= (((((/* implicit */_Bool) (short)-7277)) ? (arr_16 [i_6] [i_3] [i_2]) : (((/* implicit */unsigned int) var_14)))))))));
                        var_24 = ((/* implicit */int) var_16);
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_23 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]))));
                    }
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_26 &= ((unsigned long long int) 131082U);
                        arr_28 [i_7] [i_3] [i_4 - 1] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_2]))));
                    }
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [(unsigned char)8] [(_Bool)1] [i_2] [(signed char)5])) && (((/* implicit */_Bool) arr_24 [i_2])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        var_28 = ((/* implicit */int) arr_29 [i_8]);
        arr_31 [i_8] = ((/* implicit */_Bool) (-(arr_30 [i_8])));
        arr_32 [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)215))));
        arr_33 [i_8] [17U] = ((((/* implicit */_Bool) arr_30 [i_8])) ? (arr_30 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8]))));
    }
    var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (max((((/* implicit */unsigned int) (_Bool)1)), (2466415243U))) : (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) (~(5221824054165856941ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)145))))) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (var_3) : (((((/* implicit */int) (signed char)-14)) / (var_3))))));
}
