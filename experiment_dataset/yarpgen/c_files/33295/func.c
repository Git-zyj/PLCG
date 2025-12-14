/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33295
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (var_1) : (((/* implicit */unsigned int) var_10))));
    var_12 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : ((~(((/* implicit */int) var_8))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_15 = ((/* implicit */long long int) (+(arr_6 [i_1 + 1] [i_1 + 1])));
            var_16 = var_0;
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        }
        arr_10 [2U] |= ((/* implicit */_Bool) arr_5 [10U] [i_1 + 1]);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 2147483648U)) ? (-110739161) : (-1))))))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_3 [i_4 - 2]) : (((/* implicit */unsigned int) arr_11 [i_3]))));
                arr_17 [i_3] [i_3] [i_4 - 2] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))));
                arr_18 [i_3] [i_4 - 1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_0 [i_4 - 1]))))));
            }
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */int) (!(arr_4 [i_3])));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_9 [(signed char)0] [i_3] [i_4 - 3]))));
            arr_20 [i_3] = ((/* implicit */long long int) var_8);
        }
        arr_21 [i_3] [i_3] = 3096096720U;
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (long long int i_8 = 1; i_8 < 17; i_8 += 1) 
            {
                {
                    arr_32 [i_7] [i_6] = ((/* implicit */long long int) var_5);
                    var_21 += ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3522989018U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3)))));
                    var_22 = ((/* implicit */long long int) min((var_22), (arr_2 [i_6] [i_8 + 1])));
                }
            } 
        } 
        arr_33 [i_6] = ((/* implicit */unsigned short) var_1);
    }
}
