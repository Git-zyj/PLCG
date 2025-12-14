/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_13, 1827935642));
        var_14 = 1478253358;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_1] [i_0] [i_0] &= 1;
            var_15 += -13;
            arr_8 [i_0] [i_1] = -13399;
            var_16 = (max(var_16, 255));
            var_17 = 245;
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_18 -= 16;
            var_19 = -1827935649;
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_19 [i_4] [20] = 65535;
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 = 1;
                            var_21 = (min(var_21, 7133644186499036387));
                        }
                    }
                }
            }
            var_22 = 255;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_23 = 389412468;
                arr_32 [i_2] [i_2] [i_2] [i_9] = 65530;
            }
            var_24 = 699163592;
        }
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            var_25 = 65533;
            var_26 = (max(var_26, 23));
        }
        arr_35 [i_2] = -22695;
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 20;i_13 += 1)
                {
                    {
                        var_27 = (min(var_27, 1));
                        var_28 = 16748522607453124282;
                        arr_45 [i_12] [i_13] [i_13] [i_2] |= 56;
                    }
                }
            }
        }
    }
    var_29 = 118;
    var_30 = 1698221466256427338;
    var_31 = var_10;
    #pragma endscop
}
