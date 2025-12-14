/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~-var_1);

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_12 -= 47054;

        /* vectorizable */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            var_13 = (max(var_13, ((((arr_1 [i_0 + 1] [i_0 - 3]) <= 6130604613411482352)))));
            arr_4 [i_0] [i_0] &= (~6130604613411482375);
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_11 [12] [i_2] [i_2] [i_0] = 1;
                var_14 = 1;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_15 = var_8;

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    arr_16 [7] [i_4] [i_4] [i_5] [i_5] [i_0 - 3] = (var_3 >= 1);
                    var_16 = (var_2 & -6130604613411482352);
                    arr_17 [i_4] [i_4] [i_5] = -6130604613411482352;
                }
                arr_18 [i_4] [i_0] [i_0] [i_4] = ((-85 ? ((0 ? var_8 : 14404594447448966984)) : -8192));
                var_17 = ((~(-32767 - 1)));
            }
            arr_19 [i_2] |= -var_8;
            arr_20 [i_0] = ((!(arr_5 [i_0 - 1] [i_0 - 1])));
            arr_21 [i_0] [i_0 - 3] [i_2] = (-(arr_9 [i_0]));
            arr_22 [i_0] [i_2] = (!3123673836);
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_18 = 52161;
        var_19 = var_6;
        var_20 += (((min(4042149626260584628, 1)) == (~8447252199812305220)));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                {
                    var_21 = (min(var_21, (var_9 ^ 11083089142723064223)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_38 [i_6] [i_7] [i_8] [8] [i_6] = var_4;
                                arr_39 [i_6] [i_6] [i_6] = (arr_35 [i_8 + 2] [i_8 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                                var_22 = arr_30 [i_6] [i_6] [13] [i_6];
                                var_23 = (max(var_23, (((((((((var_5 ? 52145 : var_9))) && (~-566548683)))) ^ (((min((arr_29 [i_8] [i_6]), 32761)))))))));
                                var_24 -= max((((((-70 ? 1 : -2011988223))) && var_2)), (((-32767 - 1) == ((1 ? var_7 : var_3)))));
                            }
                        }
                    }
                    arr_40 [i_6] [i_6] [i_8 + 1] = (((arr_36 [i_6] [i_6] [i_7] [i_8]) ? (~1) : ((((((13 ? (arr_37 [i_6] [i_7] [i_6] [i_6] [i_8]) : 1))) && 9223372036854775804)))));
                }
            }
        }
        arr_41 [i_6] [i_6] = (max(((178 >> ((((32761 ? var_5 : 1)) - 17248198709186410827)))), (arr_24 [i_6])));
    }
    var_25 = (max(var_25, var_7));
    var_26 = 3292;
    #pragma endscop
}
