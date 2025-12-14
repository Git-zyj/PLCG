/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = var_11;
    var_21 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = 1;

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_1] = 61354;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_22 += 123;
                            var_23 = 333723991765049218;
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_24 = 42321;
                arr_17 [i_1] = 255;
                var_25 ^= -333723991765049219;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_26 += 333723991765049209;
                arr_20 [i_0] [i_1 - 3] [i_1] = 18446744073709551615;
            }
        }
        var_27 = 18446744073709551607;
        var_28 = -16;
        var_29 |= 0;
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_30 ^= 71;
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_30 [i_9] [i_8 - 2] [i_8 + 2] [i_8 + 2] = -1062076786;
                    var_31 &= 11175002608869651010;
                    var_32 = 35184372088831;
                }
            }
        }
        arr_31 [i_7] = -333723991765049219;
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_33 = 130816;
        arr_36 [i_10] [i_10] = 0;
        arr_37 [i_10] = 3258788145419833462;
        var_34 = 576320014815068160;
    }
    var_35 = var_14;
    #pragma endscop
}
