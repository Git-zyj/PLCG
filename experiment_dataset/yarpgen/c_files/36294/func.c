/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36294
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
    var_10 = 4294967277U;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((unsigned int) (-(arr_1 [i_0 - 1] [i_0 - 1])));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) min((min((var_6), (var_4))), (((((/* implicit */_Bool) 845478987U)) ? (3449488320U) : (4294967282U)))))) ? (max(((+(3449488309U))), (arr_1 [11U] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [23U])) ? ((-(739226883U))) : (var_0))));
    }
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [23U] = ((min((max((38435464U), (1014696726U))), (4294901760U))) | ((~(arr_5 [i_1 + 1] [i_1 + 1]))));
        var_11 &= arr_1 [i_1 + 1] [i_1];
    }
    for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) /* same iter space */
    {
        var_12 ^= 2U;
        arr_9 [i_2] [i_2] = ((min((var_9), (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (845478987U) : (var_9))))) << (((var_0) - (3460002954U))));
        var_13 = (((-(arr_1 [i_2] [i_2 - 1]))) - (((((unsigned int) var_9)) - (min((var_7), (3688207490U))))));
    }
    var_14 = var_3;
    var_15 = (~(((((/* implicit */_Bool) var_0)) ? (((4294901760U) | (4294967284U))) : (((unsigned int) 3731288748U)))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_4] [i_5] [i_5] = var_2;
                    var_16 = ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_3])) ? (arr_13 [i_3] [i_4]) : (((((/* implicit */_Bool) (-(var_9)))) ? ((+(4294967278U))) : (max((arr_7 [i_3]), (var_9))))));
                }
            } 
        } 
    } 
}
