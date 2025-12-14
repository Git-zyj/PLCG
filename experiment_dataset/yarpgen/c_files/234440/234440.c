/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (max(var_4, (-var_6 / -var_6)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((~65506) ? (min(((-115 ? 9540 : var_7)), ((min(var_1, 9540))))) : var_8));
        arr_3 [i_0] [i_0] = ((-((var_13 % (~9540)))));
        arr_4 [i_0] = (min(((var_11 ? (arr_1 [i_0] [i_0]) : 55988)), (arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = min((arr_9 [i_0] [i_3] [19] [i_0] [i_3] [i_3]), var_11);
                        var_17 ^= (min((((~(var_3 && var_14)))), (((((9223372036854775807 ? 9547 : 1984))) ? (arr_9 [i_0] [2] [i_3 - 1] [i_3] [i_3 - 1] [i_3]) : (!-32756)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [i_4] [i_4] [i_4] = var_1;
            arr_18 [i_4] = var_9;
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_21 [i_4] = (arr_15 [i_4] [i_4]);
            arr_22 [i_4] [i_4] = ((var_7 ? var_9 : (((-(((55995 > (arr_7 [i_4] [i_6] [i_6])))))))));
            var_18 = var_4;
        }
        var_19 = var_14;
        var_20 = (max(var_20, ((max(((-(arr_20 [2] [i_4]))), -65517)))));
    }
    #pragma endscop
}
