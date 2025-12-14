/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30230
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_0 - 2] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [18ULL]))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_12 [i_0 - 3] [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2 - 3] [i_1] [i_2])) ? (((/* implicit */int) arr_6 [3LL] [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_3]))));
                        arr_13 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 - 2] [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_2 - 4] [i_3]))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [5] [i_0] = ((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
                    {
                        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))))))));
                        var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_1 + 1] [i_4])) ? (arr_7 [1U] [1U] [i_2 + 1]) : (arr_7 [i_1 + 1] [i_2 - 3] [i_4])));
                    }
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_24 [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15072)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (8704757717921129695LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 - 2])) << (((1073709056U) - (1073709050U)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_6]))) | (4294967295U))));
                            var_13 |= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 1385285069U)) && (((/* implicit */_Bool) var_4)))));
                        }
                        for (long long int i_7 = 2; i_7 < 18; i_7 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_27 [i_7 + 2] [i_1] [i_2] [i_0 + 1] [i_7 + 2]))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_27 [i_0] [i_1] [i_2] [i_5] [i_7])) : (arr_10 [5LL] [i_5] [i_2] [i_2] [i_1] [i_0 + 1])))) : (((((/* implicit */_Bool) 10186975906105561108ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)))));
                        }
                        arr_28 [i_0] [i_1 + 1] [i_2 - 3] [i_0] [i_5] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) var_0))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_9)) ? (1143142313) : (((/* implicit */int) arr_1 [i_5])))) : (((/* implicit */int) arr_6 [i_0] [7LL] [(unsigned short)8]))));
                        arr_29 [i_2] = ((/* implicit */short) (~(arr_18 [i_0] [i_0] [i_2] [i_5])));
                        arr_30 [i_5] = ((/* implicit */unsigned char) 251658240U);
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0 - 2]);
    }
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) -1757592270))))) - (((int) var_2)))) != (((/* implicit */int) (_Bool)0))));
    var_19 = ((/* implicit */long long int) 4294967285U);
    /* LoopSeq 1 */
    for (unsigned int i_8 = 3; i_8 < 16; i_8 += 2) 
    {
        arr_34 [i_8 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_8] [i_8 + 2] [i_8] [i_8] [12LL]))))), (arr_17 [i_8] [i_8 - 3])))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14))))))));
        var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) >> (((var_5) - (674726143U)))))))) ? ((~(((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [i_8 + 1])))) : (((((/* implicit */_Bool) (-(-8704757717921129692LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15LL))))) : (min((arr_10 [i_8 - 1] [i_8] [i_8] [i_8 + 2] [i_8 + 1] [i_8 + 1]), (((/* implicit */int) arr_11 [i_8] [i_8 + 1] [i_8] [i_8]))))))));
    }
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), ((-(((var_2) << (((((/* implicit */int) var_0)) - (11245)))))))));
}
