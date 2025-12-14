/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42286
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
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 -= (-((~(0))));
                                var_21 = (-(var_14));
                            }
                        } 
                    } 
                    var_22 = (-((~(arr_6 [i_0] [i_0] [i_0] [i_0] [7]))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147482624)) || (((/* implicit */_Bool) -296130911))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_2] [i_5] [i_5])) ? (arr_2 [i_0]) : (arr_4 [i_0] [i_0] [i_0] [11])))))) ? (((((arr_9 [i_0] [i_0] [5] [i_2] [i_5] [i_5] [i_5]) + (2147483647))) << (((((-666020003) & (arr_11 [i_0] [2] [0] [i_5]))) - (1208046853))))) : (min((max((1396379064), (var_16))), (((/* implicit */int) ((-5) >= (30914790)))))));
                        arr_12 [10] = min((((((/* implicit */_Bool) var_15)) ? (arr_0 [i_5]) : (var_8))), (((max((var_8), ((-2147483647 - 1)))) - (((var_16) / (arr_0 [i_2]))))));
                    }
                }
            } 
        } 
    } 
    var_24 = var_3;
}
