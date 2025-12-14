/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_12 [i_0] = var_9;
                        arr_13 [i_0] = (((((((arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0]) ? (arr_1 [i_3] [i_0]) : 96)))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_3)) : 15));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_0 + 1] [i_0] = (arr_10 [i_0 + 3] [i_1] [i_3 - 1] [i_0 + 2] [i_1] [i_0]);
                    }
                }
            }
        }
        var_11 |= (((arr_8 [4]) | (min(var_4, -var_9))));
        arr_15 [i_0 - 1] [i_0] = (max(((var_9 ? (!var_3) : (var_6 <= 32))), var_3));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_12 = (max(var_12, (-var_4 && var_3)));
                            var_13 = (arr_0 [i_0]);
                        }
                        var_14 ^= ((max((min((arr_0 [i_5]), var_5)), var_4)));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_15 = (max(var_15, (((!(!var_5))))));
            var_16 = 0;
        }
        var_17 *= var_9;
        var_18 = var_9;
    }
    var_19 = ((((21272 <= ((var_0 << (((var_2 + 68) - 38)))))) ? var_0 : (((((min(var_2, var_7)))) - var_8))));
    #pragma endscop
}
