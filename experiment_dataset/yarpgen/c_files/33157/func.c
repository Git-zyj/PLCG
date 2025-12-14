/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33157
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) arr_0 [4ULL] [i_0]);
                arr_6 [i_1] [13] [8] = ((/* implicit */unsigned short) arr_3 [i_0] [(unsigned char)2] [i_1]);
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [(short)12] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0] [(unsigned char)13]), (arr_4 [i_0] [i_1]))))) : (arr_2 [i_1] [i_0])))) ? (((/* implicit */int) arr_4 [(unsigned char)1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((var_9), (((/* implicit */short) var_3))))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8));
}
