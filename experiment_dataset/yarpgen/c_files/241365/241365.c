/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(var_18, -838526400));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = (max((min(((0 ? (arr_5 [i_1]) : 8)), 5)), (((4294967287 > (((max(16384, (arr_2 [i_0]))))))))));
            var_20 = 14623332427476801527;
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_21 = var_14;
            var_22 = (((arr_6 [i_2 - 2]) ? ((var_11 - (arr_6 [12]))) : (arr_1 [11] [i_2])));
        }

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_23 *= (arr_0 [i_3]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_24 = var_12;
                        var_25 = ((((arr_1 [i_3 + 1] [i_0]) ? var_11 : (-2147483647 - 1))));
                        var_26 = ((max((8063170210356773308 | 65528), (max((arr_8 [1] [i_3] [i_3]), (arr_4 [i_0]))))));
                    }
                }
            }
            var_27 = var_1;
        }
    }
    for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_28 = (((arr_14 [i_6 + 1]) << (((max((arr_14 [i_6]), (arr_14 [i_6 - 1]))) - 3184651216260355131))));
        var_29 = -var_4;
        var_30 = (min(var_30, ((max(3063405861, var_10)))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_18 [i_7] = (((arr_15 [i_7 - 1]) & (arr_16 [i_7 + 1])));
        var_31 = (!-26);
        var_32 = var_17;
        var_33 = ((-4576238365823212966 ? 1 : 26));
    }
    var_34 = (var_2 % var_11);
    var_35 = (~var_11);
    #pragma endscop
}
