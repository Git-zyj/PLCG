/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46550
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned int) arr_2 [i_0] [11])), (var_14))));
        var_18 = ((/* implicit */short) arr_0 [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned int i_3 = 4; i_3 < 13; i_3 += 2) 
            {
                for (unsigned short i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) arr_11 [i_3 - 4] [i_3 - 2] [i_4 + 1])) ? (((/* implicit */int) arr_15 [i_3 - 4] [i_3 - 2] [i_4 + 1] [i_3 - 2])) : (((/* implicit */int) arr_15 [i_3 - 4] [i_3 - 2] [i_4 + 1] [i_4 + 1]))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_14 [i_3] [i_2] [i_3]))));
                        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 2] [i_4 + 1] [i_3 - 2] [i_2])) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 2] [i_3 - 3] [i_1])) : (((/* implicit */int) arr_15 [i_4 + 1] [i_4 - 2] [i_3 - 2] [i_1]))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_5))));
                        var_23 += ((/* implicit */signed char) arr_1 [i_2]);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) (((_Bool)1) ? (arr_5 [i_1]) : (((/* implicit */int) arr_2 [i_1] [(short)4]))))) : (arr_11 [(unsigned short)8] [(unsigned short)8] [i_1])));
        var_25 = ((/* implicit */signed char) (~(var_10)));
    }
}
