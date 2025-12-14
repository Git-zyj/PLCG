/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_15, var_4));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_3 [i_0] [i_0]);
        var_20 = (max(((-(arr_2 [i_0 - 1]))), ((((((arr_1 [i_0]) != (arr_2 [i_0])))) ^ (min(0, -1777572662))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [1] = ((~(arr_0 [i_2] [i_1])));
                    arr_10 [i_2] [6] [i_0] = ((((((-(((arr_7 [1] [0] [0] [i_2]) ? (arr_2 [i_0]) : (arr_0 [i_0] [5]))))) + 2147483647)) << (1073741820 >> 32)));
                    arr_11 [i_0 - 2] [i_0 - 2] = -2540475;
                    arr_12 [i_2] [9] [7] = ((((!(arr_3 [i_0 - 1] [i_0 - 1])))));
                }
            }
        }
        var_21 = (min(((-(max((arr_6 [14] [14]), (arr_7 [5] [9] [i_0] [i_0]))))), (arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        var_22 = (max(var_22, ((((845897470102897904 && -845897470102897904) ? ((var_3 ? -2028080624 : var_6)) : (arr_13 [i_3 - 3] [i_3 - 2]))))));
        arr_15 [i_3] = (~-845897470102897904);
    }
    var_23 = ((43981 % var_11) ? ((var_13 ? -2028080624 : ((max(var_2, var_0))))) : (((!((max(-1777572662, (-127 - 1))))))));
    #pragma endscop
}
