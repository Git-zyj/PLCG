/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 *= ((var_13 ? ((max(((~(arr_0 [i_0]))), (((var_13 > (arr_0 [0]))))))) : (63 + var_7)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = (((arr_6 [i_0] [i_0] [i_2] [7]) < (min(var_14, (arr_0 [i_3])))));
                        arr_10 [i_0] [i_1] = (min(var_16, ((-25 ? var_11 : ((var_1 ? (arr_5 [3] [i_1 + 2]) : (arr_3 [10] [i_0])))))));
                        var_20 = (((arr_6 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 2]) ? var_4 : -var_14));
                    }
                }
            }
        }
    }
    var_21 += min(-114, 25);
    var_22 = (min(((min(var_6, -5))), (min(var_6, (max(var_8, var_7))))));
    #pragma endscop
}
