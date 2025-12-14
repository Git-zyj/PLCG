/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 |= (((((var_1 ? var_0 : (((arr_6 [i_2] [14] [i_0] [4]) ^ var_2))))) ? ((~(arr_0 [i_1] [10]))) : 1));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_15 = var_12;
                        arr_11 [3] [3] [i_1] [3] [2] = ((var_5 >> (((arr_6 [i_2 - 3] [i_1] [i_0] [0]) - 14945223825452150499))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_16 = ((((max(var_9, -310874265008710399))) ? ((max(var_9, var_7))) : (!var_9)));
                        var_17 = var_9;
                        arr_15 [0] [0] [i_2] [i_2 - 3] [i_2 - 3] = (((arr_5 [3] [3] [i_4]) ? var_5 : (max(-16, (var_3 % 7794846921257916182)))));
                        var_18 = ((((min((min(var_1, 2)), (arr_3 [i_1])))) ? (((!2900018959690093424) * var_9)) : -var_2));
                    }
                }
            }
        }
    }
    var_19 = (((((var_11 ? -895138041 : 49288))) ? var_6 : var_11));
    var_20 = (var_10 > var_3);
    var_21 = var_10;
    #pragma endscop
}
