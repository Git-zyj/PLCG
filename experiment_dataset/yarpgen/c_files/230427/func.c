/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230427
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? ((-(((((/* implicit */_Bool) var_12)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */short) arr_6 [i_2] [i_2] [(short)8] [i_2]);
                        var_19 &= ((/* implicit */_Bool) ((((/* implicit */int) var_1)) * ((-(((/* implicit */int) var_10))))));
                    }
                    var_20 |= (+(((/* implicit */int) (unsigned short)13185)));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 4036552980U))));
                                arr_15 [18U] = ((/* implicit */int) arr_7 [i_5 - 3] [i_5] [i_4] [i_5] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
