/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [10] = (min((arr_3 [i_0] [i_1]), ((var_8 ? ((((arr_1 [i_0]) ? var_9 : (arr_1 [i_0])))) : ((var_6 ? (arr_1 [i_0]) : (arr_0 [i_0])))))));
                arr_5 [i_0] = max(((min((arr_1 [i_0]), ((var_2 ? var_6 : var_1))))), ((max((arr_3 [i_0] [2]), (arr_3 [i_0] [i_1])))));
            }
        }
    }
    var_13 = (max(var_13, ((var_4 ? (max((((var_5 ? var_2 : var_1))), var_8)) : var_3))));

    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        var_14 *= (min(((max(((var_5 ? var_0 : var_9)), ((var_10 ? (arr_2 [i_2 - 3]) : var_4))))), (max(var_0, -var_8))));
                        var_15 = var_8;
                        var_16 = var_11;
                        var_17 = (min(var_3, ((-(arr_9 [i_2 + 1] [i_5])))));
                    }
                }
            }
        }
        var_18 = ((var_6 >> (((max((arr_6 [i_2 - 2]), (arr_6 [i_2 - 2]))) - 2128728175))));
        var_19 = (max(-var_3, var_11));
    }
    var_20 = (max(var_20, (max(var_7, var_4))));
    var_21 = ((((min(var_8, var_2)) * ((max(var_5, var_6))))));
    #pragma endscop
}
