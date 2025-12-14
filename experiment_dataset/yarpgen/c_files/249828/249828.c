/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = var_11;
                var_21 |= ((((min(var_15, (arr_1 [i_0] [i_1])))) ? (~var_3) : (arr_1 [i_0] [i_1])));
                var_22 |= var_16;
                var_23 = var_12;
                arr_7 [i_0] = (min((min(0, 1020478109)), 0));
            }
        }
    }
    var_24 = (min(((var_3 << ((min(var_10, var_14))))), var_2));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                var_25 = 45328;
                arr_16 [i_2 - 1] [i_2] [0] &= ((((((arr_11 [0]) ? (arr_11 [6]) : (arr_11 [1])))) ? (arr_9 [0]) : (!175)));
                var_26 *= ((var_14 ? (((arr_0 [i_2 - 1]) ? 632305697725470675 : (((131 ? (arr_0 [i_3]) : 1))))) : ((min((arr_13 [i_2] [1]), (((arr_3 [i_3 - 1]) ? (arr_6 [i_2]) : 175)))))));
            }
        }
    }
    var_27 *= (((((var_16 ? (~20207) : var_8))) ? (((((var_3 ? var_11 : 20207))) ? var_5 : var_13)) : ((var_11 & (min(var_2, var_5))))));
    #pragma endscop
}
