/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202065
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
    var_13 = ((/* implicit */unsigned int) ((long long int) var_2));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned char)36))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)64))))) : ((~(9223372036854775807LL)))));
        var_14 = ((/* implicit */_Bool) arr_1 [6]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_1 [i_0]))));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
            arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (arr_6 [i_0] [(unsigned char)3] [i_1])));
        }
    }
    var_16 = ((/* implicit */short) min((var_5), (((/* implicit */int) var_7))));
    var_17 *= ((/* implicit */unsigned char) min((((/* implicit */int) var_10)), (var_5)));
}
