/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((-(-735287619 < -735287619)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [3] = ((var_5 ? var_5 : var_0));
                    var_11 = (var_7 + var_7);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_12 = ((+(((var_9 + var_1) >> (((~2147483647) - 2147483634))))));
                        var_13 = (max(var_13, ((((((var_7 >> (var_3 + 156)))) ? (max(var_7, var_2)) : (~var_3))))));
                        var_14 = -var_6;
                        var_15 = ((min((min(18446744073709551615, 249)), (var_5 && -735287613))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_16 = (var_2 % var_0);
                        arr_15 [i_0] [i_1] [2] [1] [i_2] &= 3235553039;
                        var_17 = (~-var_5);
                        arr_16 [i_0] = (-var_2 ^ var_8);
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = var_6;
    }
    var_18 = -3235553039;
    #pragma endscop
}
