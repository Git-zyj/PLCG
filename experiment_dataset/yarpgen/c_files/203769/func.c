/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203769
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
    var_20 = ((/* implicit */int) var_13);
    var_21 &= ((/* implicit */short) var_14);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 24; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4] [i_4 + 1] [i_4] [i_4] [i_1 + 1] [11LL])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) var_15))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_0))));
                        }
                        arr_15 [i_1] [i_1] [i_1] [i_3] [i_3] [i_0] = max((((/* implicit */long long int) arr_7 [i_0] [i_1])), (var_6));
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_5 [i_2 - 2] [i_1] [i_2 - 3]);
                    var_24 -= var_16;
                }
            } 
        } 
    } 
}
