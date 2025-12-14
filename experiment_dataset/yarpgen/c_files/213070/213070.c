/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 ^= var_18;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [1] [i_2] [1] = min((((var_10 * (arr_4 [7] [i_1] [7])))), 13449);
                    var_21 &= (min((max((((!(-2147483647 - 1)))), ((var_3 * (arr_0 [4]))))), -30797));
                }
            }
        }
        arr_9 [4] [i_0] &= (var_15 * -19);
        var_22 = (min(var_16, ((var_4 ? (arr_3 [i_0 + 1] [8] [i_0 + 1]) : (arr_0 [i_0 - 1])))));

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            arr_12 [i_3] = (((arr_7 [i_3]) / (max((((arr_6 [i_0] [i_3] [4]) * (arr_0 [i_3]))), (arr_3 [i_0] [i_3 + 1] [i_3])))));
            var_23 = (-127 - 1);
            arr_13 [i_3] = (arr_7 [i_3]);
            var_24 = (max(var_24, ((max(var_10, ((((min((arr_10 [10] [0]), var_10))) ? var_10 : ((max(var_16, 9780))))))))));
        }
        var_25 = ((!(arr_3 [i_0] [3] [4])));
    }
    var_26 = var_3;
    #pragma endscop
}
