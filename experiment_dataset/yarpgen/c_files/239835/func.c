/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239835
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
    var_13 = ((/* implicit */short) (+((+(((/* implicit */int) var_0))))));
    var_14 = ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_4))))), (31U))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) (~(((/* implicit */int) (short)27238))));
                var_16 = (short)13242;
                var_17 = ((/* implicit */short) var_12);
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)21857))));
                    var_18 = ((/* implicit */short) var_5);
                }
            }
        } 
    } 
    var_19 = (short)6162;
    var_20 |= ((/* implicit */short) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_12)))))));
}
