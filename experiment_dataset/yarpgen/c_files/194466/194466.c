/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = (min(var_17, ((((((-((var_6 ? (-32767 - 1) : var_9))))) != (max(17224745848146432671, ((max(var_13, 1))))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 -= (((max((arr_0 [i_0]), (arr_1 [i_0]))) > (arr_0 [i_0])));
        var_19 &= (((9223372036854775807 ^ (arr_1 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_2] [i_0] [i_0] [i_1 + 1] [i_0] = ((!((max(-29, (((-127 - 1) ? (arr_5 [i_3 + 1] [i_1] [i_2] [i_3]) : var_2)))))));
                        arr_12 [i_1] [i_1 - 2] [i_1 - 2] [i_0] = ((!(((~((var_1 & (arr_8 [i_0] [i_1 + 1] [i_2 - 2] [i_3]))))))));
                        var_20 = (max(var_20, ((max((((((max(29376, var_3)))) % var_3)), (((~(-127 - 1)))))))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = var_12;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        arr_18 [i_4] = ((!((((17 ? 15646 : (arr_14 [i_4])))))));
        var_21 *= (((((~(~var_13)))) ? ((((-1956869664 ? 7444323436642773437 : (arr_16 [i_4]))) >> var_3)) : ((((arr_17 [i_4 - 1]) / (arr_17 [i_4 + 3]))))));
        arr_19 [i_4] = ((~(arr_15 [i_4])));
        var_22 = (max(var_22, 1435172796));
    }
    #pragma endscop
}
