/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239025
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
    var_19 -= (((~(((/* implicit */int) ((unsigned short) var_11))))) | (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) (-(arr_2 [i_0])));
        var_21 = ((/* implicit */short) var_6);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_6);
            arr_7 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) var_3)))) | (((/* implicit */int) var_10))));
            arr_8 [i_0] [(short)7] = ((/* implicit */signed char) arr_2 [i_0]);
            var_22 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0])) | (((/* implicit */int) var_2))));
            arr_9 [i_0] [i_0] &= ((/* implicit */short) arr_2 [(signed char)3]);
        }
    }
    var_23 += ((/* implicit */short) ((long long int) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
    var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((var_16) | (((/* implicit */int) var_1)))) : (((/* implicit */int) var_3)))), (((((/* implicit */int) ((unsigned short) var_1))) | (((/* implicit */int) var_2))))));
}
