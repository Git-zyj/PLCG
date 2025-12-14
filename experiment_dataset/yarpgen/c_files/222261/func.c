/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222261
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)50922)), (4023904767U)));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1001163330U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                    var_11 = max((((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (arr_0 [i_0] [i_0]))))) - ((-(1U))))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)0)), ((short)-13145)))));
                }
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_7);
}
