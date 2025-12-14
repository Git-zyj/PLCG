/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [0] [i_1] [i_1] = 1326057838;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 ^= (((~798219118) / (min(-1787289022, -798219118))));
                            var_21 = (min(var_21, ((((((~(arr_9 [i_0] [i_0 + 2] [i_3 - 4] [i_3])))) ? -1847543109880453767 : ((((min((arr_8 [i_0] [i_1] [i_1] [i_3]), (arr_2 [i_0])))) ? var_9 : (((var_17 ? 35 : var_2))))))))));
                        }
                    }
                }
                arr_10 [i_0 + 2] [i_1] [i_0 + 2] = ((~(((arr_3 [i_0 + 2] [i_0 + 1] [i_0]) ? ((var_2 ? 1860727507 : var_19)) : (127 == 950455138861193922)))));
                var_22 += 4;
            }
        }
    }

    for (int i_4 = 4; i_4 < 23;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 23;i_7 += 1)
                {
                    {
                        var_23 = (min(var_23, ((min((max((max(var_19, var_9)), var_19)), (max(((var_17 ? var_1 : -2485407701583731169)), (-2147483647 - 1))))))));
                        var_24 = 20779;
                        var_25 = (((((((var_11 ? 45298 : var_13))) ? ((var_12 ? var_4 : 11575867047219533331)) : var_13))) ? var_9 : (arr_16 [i_5] [i_5] [0]));
                        arr_21 [i_7] [i_7] [i_6] [i_7] [i_4] = ((~(max((arr_13 [i_4 - 4]), (max(var_17, var_14))))));
                    }
                }
            }
        }
        arr_22 [i_4] = (29316 ^ 145);
    }
    for (int i_8 = 4; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_26 |= (2228973869 ? -798219115 : -35);

        for (int i_9 = 3; i_9 < 23;i_9 += 1)
        {
            var_27 = -31205;
            var_28 = (((((var_19 ? ((var_19 ? var_7 : var_2)) : (!var_8)))) ? (((-950455138861193922 ? -40 : (14 | var_12)))) : (388212578 / -950455138861193935)));
            var_29 = min(var_2, (((((-950455138861193935 ? var_14 : 18234657568129305015))) ? var_8 : (((min(var_2, var_12)))))));
        }
        arr_29 [i_8] = 1070977685910652636;
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_30 = ((((max(-36, 11))) ? ((-1 ? var_1 : var_5)) : ((-114 ? -1 : -1111))));
        /* LoopNest 3 */
        for (int i_11 = 4; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 22;i_13 += 1)
                {
                    {
                        var_31 = (((var_0 ? 4294967295 : ((1196021974 ? var_18 : var_18)))));
                        var_32 += ((((~(arr_31 [i_13 - 1])))) ? (((arr_34 [i_12 + 1] [i_12 + 1] [i_12 + 1]) ? (min(241, 8077073425275712866)) : (((var_18 / (arr_27 [i_13])))))) : (!7));
                    }
                }
            }
        }
        arr_39 [i_10] [i_10] = (((((248 ? 14 : var_14))) ? 3983712356 : 242));
    }
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            {
                var_33 = var_2;
                arr_44 [i_14 + 1] = var_8;
                arr_45 [i_14] = (((var_8 ? var_7 : var_6)));
                arr_46 [i_14] [10] [i_15] = 3057413057;
            }
        }
    }
    #pragma endscop
}
