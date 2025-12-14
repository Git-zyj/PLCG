/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (!(arr_0 [i_0]));
        var_16 = (max((((arr_0 [1]) ? (((max(125, (arr_0 [1]))))) : (((arr_1 [i_0]) - var_0)))), (arr_1 [i_0])));
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_4 [i_1]);
        var_18 = (max(var_18, ((min(((max(1, 32765))), (min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))))))));

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_1] [i_1 + 1] [i_1] = (min((max((arr_8 [i_1] [i_1 + 1]), (arr_7 [i_1] [i_1 + 1] [i_1]))), (arr_4 [i_1])));
            arr_10 [16] &= (min((max(((-(arr_8 [i_1] [i_2 - 2]))), (-30419 * 30412))), 42784));
            arr_11 [i_1] [i_1] = (max((((!(arr_8 [i_1 + 1] [i_2])))), (min((arr_7 [i_1] [i_1] [i_2 + 3]), (arr_7 [i_1] [i_1] [i_2 + 1])))));
            arr_12 [i_1] = ((max(((36425 ? 2358003898 : (arr_4 [i_1]))), ((max((arr_6 [i_2] [i_1] [i_1 + 1]), (arr_7 [i_1] [i_1 + 1] [i_2])))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 *= (min((min((arr_13 [i_1] [22] [i_1 + 1]), (arr_4 [i_4 - 3]))), (0 & 0)));
                        var_20 = (arr_18 [i_1 + 1] [i_1] [i_4 + 2] [i_1]);
                        var_21 = (max((min(((min((arr_18 [i_2 + 1] [i_2] [i_3] [i_1]), (arr_6 [i_1] [i_1] [i_3])))), (min((arr_15 [i_1] [i_2] [1] [i_4]), (arr_8 [i_3] [i_2]))))), (((~(!var_10))))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_22 *= (min((arr_4 [i_1 + 1]), (min(((min(var_6, -47))), (max(var_3, (arr_13 [i_5] [0] [i_1 + 1])))))));
            var_23 *= min(66, ((min(-1644797876, 1))));
        }
    }

    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_24 *= min(((33226 ? (max((arr_19 [i_6] [i_6]), (arr_13 [i_6] [i_6] [i_6]))) : (((-(arr_15 [i_6] [i_6] [i_6] [i_6])))))), ((min((arr_22 [i_6]), (arr_22 [i_6])))));
        var_25 = (max(var_25, ((!((min(1, -15)))))));
        arr_25 [i_6] = (arr_24 [i_6] [i_6]);
    }
    var_26 = (max(var_26, (max(1644797876, 30))));
    #pragma endscop
}
