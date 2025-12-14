/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(max(var_8, -385704541))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_13 = (min(var_13, (~var_6)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 ^= 537547766;
                    var_15 = var_4;
                    arr_9 [i_0] = var_4;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_16 = var_2;
                        arr_12 [3] [3] [i_1] [i_2 - 1] [i_0] = (~var_2);
                        var_17 &= var_3;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_17 [i_0 + 2] [i_0 + 2] [i_2] [i_3] [i_0] [i_3] [4] = -537547766;
                            var_18 = var_8;
                            var_19 = -537547765;
                        }
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_20 = var_11;
                        var_21 = var_0;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {

        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            arr_25 [5] [i_7] [i_7] = (~(((!((min(var_11, 28512)))))));
            var_22 += min(114, (min(var_2, var_10)));
        }
        for (int i_8 = 3; i_8 < 18;i_8 += 1)
        {
            var_23 = 67108736;
            var_24 = (max(var_4, 151));
        }
        arr_28 [13] [i_6] = var_4;
    }
    #pragma endscop
}
