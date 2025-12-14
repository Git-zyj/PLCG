/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192861
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
    var_19 = var_17;
    var_20 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_13))));
                            var_22 ^= ((/* implicit */int) ((var_13) <= (min((max((((/* implicit */int) var_4)), (arr_5 [i_3] [(_Bool)1] [i_1] [i_0]))), (((/* implicit */int) var_18))))));
                        }
                    } 
                } 
                var_23 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_0 [(short)13] [i_1 + 1])))))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (arr_11 [i_1] [i_1 - 1] [i_1 + 1] [i_0] [i_0])))));
            }
        } 
    } 
}
