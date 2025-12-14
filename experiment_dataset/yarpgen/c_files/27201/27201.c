/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [10] = (min(((~(~0))), var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_0] [i_0] = ((!((!(arr_3 [i_1] [15])))));
                                arr_14 [i_0] [i_1] [i_3] [i_0] [i_3] = var_2;
                                var_13 = (min(var_13, var_5));
                            }
                        }
                    }
                    var_14 = ((((((((arr_9 [22] [i_0] [i_0] [i_0]) != 255)) ? (max((arr_4 [i_0 + 1] [12] [i_0 - 1] [3]), var_3)) : var_5))) ? (max(((var_9 & (arr_6 [10]))), (((var_8 ? 2555795488139672612 : 681345817))))) : ((~(arr_0 [i_0 - 1])))));
                }
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
