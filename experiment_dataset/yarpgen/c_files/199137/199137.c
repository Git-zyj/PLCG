/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 -= (((arr_1 [i_0]) ? (((var_9 | (arr_3 [i_0] [2])))) : (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_11 = (max(var_11, var_8));

            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_14 [i_3] [i_1] [i_2] [i_1] = (((arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 1]) ? var_7 : (((arr_9 [i_0] [i_1] [i_2] [i_3]) * (arr_10 [i_0] [i_3] [i_2] [i_3])))));
                    arr_15 [i_0] [i_1] [i_2 - 1] [i_3] = (arr_0 [i_0]);
                    var_12 += (((arr_8 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 1]) ^ (arr_6 [i_0] [i_1] [i_2 + 1] [i_1])));
                    var_13 -= (((arr_9 [i_2] [i_2 - 1] [i_2 - 1] [i_3]) || (arr_9 [i_0] [i_2 - 2] [i_2 - 2] [5])));
                }
                var_14 &= (((-(arr_5 [i_1]))));
                var_15 = (((arr_10 [i_2 + 1] [i_1] [i_1] [i_1]) ? (arr_10 [i_2 + 1] [i_0] [i_0] [i_2]) : (arr_10 [i_2 - 2] [i_2] [i_2] [i_2])));
            }
            var_16 = -var_6;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_4] = ((!(((arr_5 [i_4]) || (arr_5 [i_4])))));
            arr_20 [i_0] [i_4] = (((arr_5 [i_0]) ? (~15) : (arr_13 [i_0] [i_0] [i_4] [i_4])));
        }
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            var_17 = ((-75 < (arr_4 [i_0] [i_0])));
            var_18 = (max(var_18, (!var_1)));
        }
    }
    var_19 *= (((192 & var_2) > (!14173712462267109633)));
    #pragma endscop
}
