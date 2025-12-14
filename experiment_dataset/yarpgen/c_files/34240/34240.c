/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(((min(var_16, var_15))), (max(var_6, 113)))), (max((min(9007194959773696, -84)), (min(9007194959773696, -9007194959773678))))));
    var_18 = (max((max((max(12, -23910)), ((max(var_6, 128))))), (max(((max(1, var_0))), (min(6, var_15))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 += 991014544;
        var_20 ^= 1;

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_21 = (max(var_21, 1213879674320793050));
            var_22 ^= 236;
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_23 = -26124;
            arr_7 [i_0] [i_2] [i_0] = 0;
            var_24 -= -102;
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_11 [5] [i_3] = 8;
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_4] [i_4] [i_3] = 1116732503;

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_25 = 140737488351232;
                            arr_24 [4] [4] [i_5] [i_4] [i_5] = 0;
                            var_26 += 1;
                            arr_25 [i_3 - 1] [i_3 - 1] [13] [i_5] [5] [i_7] [i_4] = 101;
                            arr_26 [i_4] [i_6] [i_3 - 1] [i_3 - 1] [i_4] = -474273170178286708;
                        }
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_27 = 1;
                            var_28 = 243;
                            var_29 = 29777;
                            var_30 = 1;
                            var_31 -= 1;
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_33 [i_3 - 1] [10] [i_4] [i_6] [i_6] = 16777088;
                            arr_34 [i_4] [i_4] [12] [12] [i_6] [i_9] = -100;
                            arr_35 [i_3] [i_3] [i_4] [i_5] [i_6] [1] [i_9] = -24069;
                        }
                        var_32 += 42;
                        var_33 = 255;
                    }
                }
            }
        }
        var_34 = 3178234821;
    }
    #pragma endscop
}
