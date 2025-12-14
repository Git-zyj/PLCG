/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 += 222;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_14 += ((min((arr_2 [i_0] [i_1 - 3]), (arr_2 [i_0] [i_1 + 1]))));
                        var_15 = (((9 == 2347135541) ? (max(4, 4489938463357137586)) : (max(8, 15070450090464314005))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_16 ^= (((!2347135556) >= (arr_8 [10] [10] [i_2 - 2] [i_4])));
                        arr_15 [i_0] [i_0] [i_0] [i_0] &= (((((((~12164190024440017556) < var_2)))) | ((var_1 ? (4489938463357137590 | var_7) : 18446744073709551615))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_17 = (((-(arr_5 [i_5] [21] [21] [i_0]))));
                        var_18 = (arr_18 [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_2 - 1]);
                    }
                }
            }
        }
    }
    var_19 = (!var_4);
    var_20 = (max(var_20, ((var_2 ? var_9 : ((((!17117211988165491333) == (9 + var_4))))))));
    #pragma endscop
}
