/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((((((arr_3 [i_1]) || var_3)) ? ((((arr_6 [i_2] [i_1] [i_0]) + (arr_4 [0])))) : (arr_5 [i_0] [i_1]))) <= ((min((min(4107284970, var_5)), var_2)))));
                    var_18 = (min(var_18, var_0));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_19 = ((((min(var_15, (var_15 + var_13)))) ? ((~(arr_4 [i_7 - 1]))) : (arr_15 [i_3] [i_4] [i_5] [21])));
                                var_20 = 9461491437863485158;
                                arr_23 [i_3] [i_4] [i_3] = var_9;
                            }
                        }
                    }
                    var_21 += var_1;
                }
            }
        }
        arr_24 [i_3 + 1] [i_3] = ((3015585370705444942 ? -4969443192082888125 : 65408));
        var_22 = (max(((min((((arr_13 [i_3] [i_3]) ? var_12 : (arr_12 [i_3] [4] [i_3]))), -var_15))), (arr_5 [i_3 + 1] [i_3 + 1])));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_27 [i_8] [i_8] = ((var_14 != (arr_12 [i_8] [i_8] [i_8])));

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_23 = var_16;
            arr_31 [i_9] = ((((min(var_3, 9244903855120944471)) + var_17)));
            var_24 = (min(var_24, ((((((min(4969443192082888107, 33554432)) != 4294901870)) ? (min((min((arr_20 [i_8] [i_8] [i_9] [i_9] [i_9]), var_12)), (((var_12 == (arr_7 [i_8] [i_9] [i_9] [i_9])))))) : var_1)))));
            arr_32 [i_8] [i_8] [i_8] = ((((-1 * (arr_19 [i_8] [i_8] [i_8] [i_8]))) % ((min(0, ((var_6 ? (arr_3 [i_9]) : var_2)))))));
            arr_33 [i_8] [i_9] [i_9] = (((min((min(33554429, (arr_18 [i_8] [i_8] [i_8] [i_9]))), (arr_25 [i_9] [i_8]))) * (arr_6 [i_8] [i_8] [i_8])));
        }
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 11;i_10 += 1)
    {
        var_25 -= ((var_1 >> (-1 + 25)));
        arr_36 [i_10] = 2147483647;
        arr_37 [i_10 + 1] = ((0 ? 1 : 33554432));
        arr_38 [i_10 - 1] = ((!(arr_2 [i_10])));
        var_26 = (-(((arr_0 [i_10]) ^ var_11)));
    }
    var_27 = (((((32767 ? 8641506595115262101 : 9884990768933568698)) % var_13)));
    var_28 = (var_1 != 4983440800745264702);
    #pragma endscop
}
