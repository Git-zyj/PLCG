/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224431
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0 + 1] [i_0 + 2]) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (arr_1 [i_0 + 2] [i_0 + 2])))) : (((long long int) var_8)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 7; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)192)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (signed char)93))))) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2])) : (max((arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 2]), (((/* implicit */unsigned long long int) var_0))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((short) ((long long int) arr_7 [i_0])));
                        arr_10 [i_2] [i_2 - 1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) var_14);
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) var_16);
                        var_21 = ((/* implicit */long long int) arr_2 [i_2] [i_2] [i_1]);
                        var_22 = ((/* implicit */signed char) arr_5 [i_0 + 1] [i_2] [i_0 + 1]);
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */long long int) (signed char)92);
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((int) var_17))) : (-4751201424282320394LL))))));
                        var_24 ^= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_1)) : (((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_1])) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) / (((/* implicit */unsigned long long int) arr_1 [i_2 - 3] [i_2 - 3])))));
                        arr_18 [i_2] [i_1] [i_1] [i_1] [i_2] [i_5] = min((((/* implicit */long long int) ((((/* implicit */int) (signed char)93)) / (((/* implicit */int) (short)-32754))))), (arr_4 [i_2] [i_2]));
                    }
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 2])))));
    }
    var_25 = ((/* implicit */long long int) (-((~(var_0)))));
    var_26 *= ((/* implicit */unsigned char) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
    var_27 ^= ((/* implicit */short) var_8);
}
