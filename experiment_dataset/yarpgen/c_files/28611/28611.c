/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((var_4 ? 8527334015442632859 : var_11))) ? ((8527334015442632859 ? 64 : 1)) : ((var_4 ? var_0 : var_6))))) ? ((((((1 ? var_11 : var_11))) ? ((var_6 ? var_4 : 1)) : (((var_6 ? 1 : var_2)))))) : (((((68 ? var_4 : 1))) ? (((var_12 ? var_6 : var_5))) : ((var_6 ? var_12 : var_6))))));
    var_14 = (((((((var_7 ? var_4 : 252))) ? (((var_10 ? 1 : 1))) : ((var_2 ? var_11 : var_4))))) ? ((((((1 ? var_1 : 16151689949684827713))) ? (((var_2 ? var_3 : var_10))) : ((var_3 ? var_4 : var_2))))) : (((((var_3 ? var_10 : var_1))) ? ((var_10 ? var_6 : var_12)) : (((var_11 ? var_9 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (((((15312481020103227892 ? 0 : (((-9223372036854775807 - 1) ? 0 : 0))))) ? ((((((8785194766094750440 ? (arr_1 [i_0]) : 216))) ? ((233 ? 1 : 255)) : ((var_7 ? 1 : var_11))))) : ((((((arr_0 [i_0] [i_1]) ? var_5 : var_6))) ? ((217 ? 1 : (arr_2 [i_0] [i_0] [i_0]))) : (((arr_1 [i_0]) ? var_12 : 0))))));
                var_15 = (((((1 ? ((8622798608038023556 ? 9823945465671528060 : 5462000259734585446)) : 8191))) ? 1 : ((1 ? ((237 ? 5988761366520783313 : 1)) : ((12867588026996982804 ? 14138358115627089831 : 0))))));
            }
        }
    }
    var_16 = ((((((((var_3 ? 1 : var_11))) ? ((var_5 ? 1 : 61)) : ((var_7 ? var_3 : 0))))) ? (((((var_12 ? var_5 : 1))) ? ((var_11 ? var_11 : var_12)) : (((var_9 ? 1 : var_4))))) : ((((((12 ? 7 : 1))) ? ((9223372036854775807 ? 1 : var_10)) : ((var_9 ? var_2 : var_1)))))));
    #pragma endscop
}
