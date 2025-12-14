/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = (((((((7407898500181864124 ? -7407898500181864125 : (arr_0 [i_0]))) << (((arr_2 [i_0]) - 110))))) ? -7407898500181864146 : (((((arr_1 [i_0]) ? var_11 : var_3)) | (min(var_6, (arr_0 [i_0 - 1])))))));
        var_17 = (min((max(((((arr_0 [i_0]) && 236))), (max(18446744073709551615, var_0)))), (((-var_8 ^ ((var_10 ? var_6 : var_14)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = min((((((((arr_0 [i_1]) + 1))) ? ((2 ? var_9 : var_8)) : (19 * 8)))), (((((-7407898500181864124 ? 7808276737500972460 : var_9))) ? ((min((arr_4 [i_1]), -321868663))) : -857715140)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_2 + 1] [i_3] [i_4] [i_3] = var_11;
                        arr_16 [i_1] [i_3] [i_1] [i_3] = ((!((max((arr_10 [i_2 + 1] [i_2] [i_2] [i_2 + 1]), -41196355)))));
                    }
                }
            }
        }
        arr_17 [i_1] = 18446744073709551611;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_23 [i_6] [i_6] = (((((arr_18 [i_5 - 2]) && 28)) && var_14));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_19 = 18902810393799053;
                            var_20 *= var_5;
                        }
                    }
                }
            }
            arr_31 [i_5] [i_5 + 2] [i_6] = (arr_2 [i_6]);
            var_21 ^= -618080446;
            var_22 = (max(var_22, (arr_2 [16])));
        }
        for (int i_10 = 3; i_10 < 10;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {
                        arr_40 [i_10] = ((var_3 ? (arr_25 [i_5] [i_10] [i_11]) : (arr_25 [i_12] [i_10 + 1] [i_10 + 1])));
                        var_23 ^= 0;
                        arr_41 [4] [i_10] [i_10] [i_12] = 1;
                    }
                }
            }
            arr_42 [i_10] = (((arr_38 [i_5 - 1] [i_5]) << (var_12 - 1146682466)));
            var_24 = var_1;
            arr_43 [i_10] [i_5 - 3] [i_10] = ((~(((arr_35 [i_5 - 3] [i_10] [i_10] [i_5 - 3]) ? (arr_19 [i_5]) : 4294967295))));
        }
        arr_44 [i_5] = (((!8593853393685055203) ? ((65520 ? 18902810393799053 : var_8)) : (arr_37 [4] [i_5 - 3] [i_5 - 1] [i_5 + 1])));
        var_25 ^= (arr_35 [i_5 - 1] [i_5] [6] [i_5 - 2]);
        var_26 = var_7;
        var_27 ^= var_1;
    }
    var_28 = (min(var_14, (max(var_6, ((max(var_7, 1)))))));
    #pragma endscop
}
