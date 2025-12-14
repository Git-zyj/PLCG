/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243748
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_1 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) (short)-7067))))), ((+(((/* implicit */int) var_5))))));
                var_12 = ((/* implicit */short) (((+(((((/* implicit */_Bool) (short)7068)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)11907)))))) * (((/* implicit */int) arr_1 [i_0]))));
                var_13 = (_Bool)1;
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */short) var_3);
                    var_14 += ((/* implicit */short) max((arr_11 [(_Bool)1] [i_3] [i_4 - 1] [i_2 - 1]), (((_Bool) (short)0))));
                    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7055)) ? (((((_Bool) var_0)) ? (((/* implicit */int) ((_Bool) arr_2 [i_3]))) : (((/* implicit */int) (!((_Bool)0)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2] [i_3]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_2 - 1] [i_4 - 1] [i_2 - 1] [i_2 - 1]))))));
                    arr_13 [i_3] [(_Bool)1] [i_3] [i_3] |= min((((/* implicit */short) ((_Bool) (_Bool)0))), (((short) arr_0 [i_2] [(_Bool)1])));
                    var_16 = ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (short)15243))))));
                }
            } 
        } 
    } 
}
