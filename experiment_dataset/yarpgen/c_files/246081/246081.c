/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_10 = (max(var_10, 0));
            var_11 = (arr_2 [i_0]);
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_12 = 712871635;
                var_13 = (arr_9 [i_2 + 1] [i_2] [i_3] [i_3]);
            }
            var_14 = (min((arr_7 [i_0]), 131008));
        }
        var_15 *= (max((((0 / (arr_0 [i_0])))), (min(((max(253, (arr_1 [i_0] [i_0])))), 4294967295))));
    }
    var_16 = (min(var_16, var_9));
    var_17 = -var_8;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_18 ^= (arr_16 [i_5 + 3] [i_5 + 3]);
                    var_19 = (arr_12 [i_4]);
                }
                arr_17 [i_4] [1] = (arr_12 [i_5]);
                var_20 = 401;
                arr_18 [i_4] [i_4] [i_4] = (arr_13 [i_5]);
            }
        }
    }
    #pragma endscop
}
