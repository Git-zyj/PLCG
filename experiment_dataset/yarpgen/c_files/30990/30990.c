/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_12 = (~32756);

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_3] = var_10;
                            var_13 = (~92);
                            var_14 = 14381531459398679313;
                            var_15 = (max(var_15, var_1));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_3] [i_3] [i_2] [i_3] [i_3] [i_1] = (arr_6 [i_5] [i_2] [i_1]);
                            arr_20 [i_3] = (14381531459398679311 | var_4);
                            var_16 = (arr_17 [i_1]);
                        }
                    }
                }
            }
            var_17 -= (arr_17 [i_0]);
            var_18 = 4065212614310872303;
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_19 = ((14381531459398679313 ? 4065212614310872302 : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_6])));
            var_20 = (arr_5 [i_0] [i_6]);
            var_21 ^= 14381531459398679339;
            arr_23 [i_0] [i_6] = 14381531459398679332;
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                var_22 *= (arr_25 [i_8 + 1] [i_8] [i_0]);
                arr_31 [i_0] = ((14381531459398679330 ? var_4 : (arr_2 [i_0])));
                var_23 = (~14381531459398679332);
            }
            arr_32 [i_0] [i_0] = (!var_2);
        }
        var_24 = 14381531459398679357;
    }
    #pragma endscop
}
