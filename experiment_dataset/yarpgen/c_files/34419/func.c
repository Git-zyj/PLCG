/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34419
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)30124), (((/* implicit */unsigned short) min((((/* implicit */short) var_8)), (var_3))))))) && ((!(((/* implicit */_Bool) var_2))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = var_3;
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 += (+(((/* implicit */int) arr_4 [i_0] [(short)0] [i_1 - 1])));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1 - 1] [i_0 - 1])))))));
                    var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) & (((/* implicit */int) arr_1 [i_0 - 1]))));
                }
            } 
        } 
    }
    var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
}
