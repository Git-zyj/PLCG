/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 = (arr_1 [i_0]);
        arr_2 [i_0 - 1] = (min(((var_5 ^ (max(0, var_3)))), ((min(36186, var_15)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {

                for (int i_3 = 3; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_1] = (max((var_10 ^ var_12), (arr_6 [i_3 + 1] [i_3 - 2] [i_1])));
                    var_21 -= 15393;
                    arr_14 [i_3 - 1] [i_2] [i_1] = (((-32767 - 1) ? -1 : 18));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_19 [i_4 + 1] [i_4] [i_1] = (18242110465024710160 & var_11);
                    var_22 = ((var_13 + (var_11 / var_12)));
                    arr_20 [i_4 - 3] [i_4 - 2] [i_4] = var_15;
                    var_23 = var_18;
                }
                arr_21 [i_2] [i_1] = (((((max(0, (!65535))))) * (min(3807373950419644677, (min(204633608684841458, 5541347337136522155))))));
                var_24 = (min(var_24, (((((((arr_0 [i_2]) ? -617412797 : var_10))) ? (min(1, -3)) : (arr_0 [i_1]))))));
            }
        }
    }
    var_25 = (min(var_17, (((var_15 & var_9) | (var_14 < var_4)))));
    #pragma endscop
}
