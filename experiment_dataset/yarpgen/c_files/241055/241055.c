/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] = var_2;
                        var_17 *= ((var_14 ^ (arr_2 [2])));
                        var_18 = (!10906208078653100066);
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_19 = (((arr_4 [i_4 - 1]) ^ 10906208078653100066));
            var_20 = (min(var_20, (~var_6)));
        }
        var_21 = (min(var_21, (((((var_1 ? 10906208078653100066 : (-2147483647 - 1))) | (((2305843009213693952 ? (arr_4 [i_0]) : var_16))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_22 = (arr_10 [i_5]);

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_21 [i_5] [i_5] = (((arr_19 [i_6] [1]) ? 217 : (arr_17 [9] [i_6])));
            arr_22 [i_5] [i_5] = ((0 || (arr_5 [9] [i_6])));
            var_23 += -1379371970857999037;
            arr_23 [i_5] [i_5] [i_5] = (var_6 & 4294967295);
        }
        var_24 += (!0);
    }
    var_25 = (max(var_25, var_5));
    var_26 = var_12;
    #pragma endscop
}
