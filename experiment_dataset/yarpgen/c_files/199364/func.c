/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199364
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
    var_10 = min((var_8), (((min((var_4), (var_9))) ^ ((~(((/* implicit */int) (signed char)0)))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_11 = var_2;
        var_12 = arr_0 [i_0];
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_0 [i_3]), (((/* implicit */unsigned int) var_7)))) <= (var_5))))) <= (((((/* implicit */_Bool) 1850799954U)) ? (4294967295U) : (1850799940U)))));
                        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) -1032294085))));
                        arr_12 [i_0 + 2] [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */int) var_5);
                        var_14 = ((/* implicit */int) arr_0 [i_3]);
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_16 [i_4] &= ((/* implicit */int) (((~(arr_4 [i_4] [i_4] [i_4]))) >= ((~(((((/* implicit */_Bool) var_3)) ? (var_8) : (var_9)))))));
        var_15 = (~(((int) ((((/* implicit */int) var_0)) < (arr_13 [i_4] [i_4])))));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 17; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */signed char) ((arr_5 [i_5] [i_5] [i_5 - 2] [i_5 - 2]) + (arr_5 [i_5] [i_5] [i_5 + 1] [i_5 - 2])));
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 15U)) && (((/* implicit */_Bool) (signed char)-1)))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_18 &= ((/* implicit */int) 1850799966U);
            arr_24 [i_5] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */int) arr_1 [i_5]))))) ? (((((/* implicit */_Bool) (signed char)-122)) ? (33898808U) : (4294967289U))) : (1850799990U)));
            var_19 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) 2121924128)) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) ^ (1446482209U))));
        }
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5 - 3])) ? (arr_9 [i_5 - 3] [i_5] [i_5] [i_5 - 3]) : (((/* implicit */unsigned int) var_7))));
    }
}
