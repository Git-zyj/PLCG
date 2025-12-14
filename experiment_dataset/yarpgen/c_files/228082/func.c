/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228082
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
    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) > ((-(((/* implicit */int) (short)-30825))))))) + (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_18 = max((arr_3 [i_0] [i_0] [(short)10]), (var_7));
                            var_19 &= arr_9 [i_0] [(short)0] [i_2] [(short)0] [11] [i_3];
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) arr_0 [i_0] [i_1]);
            }
        } 
    } 
}
