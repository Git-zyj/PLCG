/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241157
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_12 = ((/* implicit */signed char) arr_1 [i_1] [(signed char)13]);
                    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                }
                arr_8 [i_0] [i_1] [0U] = ((/* implicit */unsigned int) (signed char)0);
                var_14 -= min(((~(((((/* implicit */_Bool) var_7)) ? (604102959U) : (3690864336U))))), (((((/* implicit */_Bool) (-(3690864336U)))) ? ((-(2594883956U))) : (var_11))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_15 *= ((/* implicit */signed char) (~((~(arr_4 [i_0] [i_1 - 2])))));
                            arr_14 [(signed char)8] [i_1] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) min(((~(arr_11 [i_1] [i_1]))), (max((((/* implicit */unsigned int) arr_10 [i_1 + 3] [i_1] [i_0] [i_0])), (var_10)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= (-(604102959U));
    var_17 = ((/* implicit */int) (signed char)19);
    var_18 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8));
}
