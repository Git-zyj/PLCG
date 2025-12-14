/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23632
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_10)) & (((((/* implicit */long long int) 1547814827)) / (var_4))))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */signed char) ((var_8) ? (((/* implicit */int) arr_2 [i_0] [(short)11])) : (((/* implicit */int) arr_2 [3] [3]))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 4; i_2 < 19; i_2 += 3) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2 - 3])) ? (((/* implicit */int) arr_2 [i_1] [i_2 - 2])) : (((/* implicit */int) arr_2 [i_1] [i_2 - 3]))))) ? ((-(((/* implicit */int) (unsigned char)190)))) : (((((/* implicit */int) arr_2 [i_1] [i_2 + 2])) | (((/* implicit */int) var_8)))))))));
                arr_11 [(unsigned char)12] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned char)221)))), (((/* implicit */int) arr_7 [i_2]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(unsigned short)18]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2]))))) : (((((/* implicit */_Bool) -1420052594)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))))));
            }
        } 
    } 
}
