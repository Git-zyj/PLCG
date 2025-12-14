/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = (min(var_15, ((!(((var_1 % (arr_0 [i_0]))))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_16 = 6804374567748278159;
            var_17 = (((arr_0 [i_0]) <= 6804374567748278156));
            var_18 *= -6876624727604415446;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_16 [i_5] [i_0] [i_4] [3] [i_2] [i_0] [3] = (arr_15 [i_0] [i_4] [i_3] [i_4] [i_4] [i_0 + 1] [i_4]);
                            var_19 = -557817179158731160;
                            var_20 = -6804374567748278160;
                        }
                    }
                }
            }
            var_21 = (max(var_21, -6804374567748278159));
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_22 = 2147483647;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_29 [i_7] [i_7] [13] [i_9] = -89;
                        arr_30 [i_6] [i_7] [i_6] [i_6] [i_6] = (-(arr_25 [i_7] [i_7] [i_7 + 1]));
                        arr_31 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] = ((!(((arr_5 [i_7 + 1]) > (arr_5 [i_7 + 1])))));
                    }
                }
            }
        }
        arr_32 [i_6] = -0;
    }
    var_23 = var_3;
    var_24 = var_6;
    #pragma endscop
}
