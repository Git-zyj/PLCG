/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 12186899076198300482;
    var_20 = (max(((max(var_9, (max(1, 511))))), (min(((-1714498867048962624 ? 0 : 2917118051)), var_13))));
    var_21 = var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_22 = ((var_5 ? var_1 : (var_17 / 2706805339)));
                        var_23 += (((arr_6 [i_1 + 2] [i_2 - 1] [i_3]) + var_7));
                        arr_9 [i_3] [i_1] [i_0] [2] [i_3] [i_3] = -63;
                    }
                }
            }
        }
        var_24 -= (((arr_3 [i_0] [i_0] [i_0]) / (arr_3 [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_13 [10] |= (-14 - 32760);
        var_25 = ((((((-(arr_3 [i_4] [i_4] [i_4])))) ? var_9 : (var_6 & var_17))));
        var_26 *= var_4;
    }
    var_27 = (min(var_27, var_6));
    #pragma endscop
}
