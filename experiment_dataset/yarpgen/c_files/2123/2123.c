/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_6, 18446744073709551609));
    var_12 |= ((+(max((var_7 != 222), 12212524190794208108))));
    var_13 = ((((((max(var_7, var_1)) + (max(var_7, var_9))))) && var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [11] = (min(((((8466 ? var_10 : 3)) + (var_10 != -2107585199))), (((~(((!(arr_0 [i_1])))))))));
                    var_14 = ((((-((var_6 ? -14349 : var_10)))) + 205));
                    var_15 = (((arr_5 [i_2 - 2]) ? (((((((arr_3 [13] [i_0]) / (arr_0 [i_2])))) != (max(var_4, var_3))))) : (((!(arr_4 [i_1]))))));
                }
            }
        }
    }
    var_16 &= ((((max(17, var_3))) ? (82 != var_1) : (max((!var_9), ((var_7 ? var_5 : var_1))))));
    #pragma endscop
}
