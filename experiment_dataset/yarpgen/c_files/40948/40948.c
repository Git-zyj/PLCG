/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (min(var_12, (min(((max(var_3, 1))), var_2))));
        var_13 = (min(9815029166217561680, 1));
    }
    var_14 = (max(var_1, -6912152209139709533));

    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_15 = var_5;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_16 = (max(var_16, ((max(var_2, (min((max(4173672467950888342, var_10)), -742792825)))))));
                        var_17 = (max(var_17, ((min((min(var_6, var_3)), 268435455)))));
                    }
                }
            }
        }
        arr_19 [i_1] = var_1;
        arr_20 [i_1 - 2] = 3440825681;
        arr_21 [i_1 + 2] = (min((max(268435455, (max(101, var_9)))), 126));
    }
    #pragma endscop
}
