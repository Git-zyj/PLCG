/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = (min(var_15, -1));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_16 += (!-1);
                            var_17 = (max(var_17, var_0));
                        }
                    }
                }
            }
            arr_12 [i_1] = (~-2);
            var_18 += (arr_2 [i_0 - 1]);
            arr_13 [i_0] [i_0] = (((-32767 - 1) ? (((-1 ? -7 : 7))) : (arr_2 [7])));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_19 = (!var_9);
            var_20 *= ((((((arr_0 [i_0 - 2]) ? var_3 : (arr_8 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 - 1])))) ? (arr_7 [9] [i_0] [i_5] [i_5] [9] [9]) : (arr_3 [i_0 + 1])));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_21 = var_3;
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_22 = ((32761 | ((23771 ? var_5 : ((4294967295 ? var_5 : (arr_5 [i_0] [10] [i_7 - 1] [i_8])))))));
                        var_23 &= (min((max(-22, 16383)), (((((((arr_20 [i_0] [i_6]) ? var_7 : 32767))) ? 35 : 0)))));

                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_6] [i_6] [i_7] [i_7] = var_11;
                            var_24 = var_6;
                            var_25 = ((var_11 ? -1 : (arr_26 [i_0] [9] [i_7] [i_8])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, ((((-32767 - 1) ^ 4294967280)))));
                            arr_34 [i_0] [i_0 - 2] [i_0] [i_6] [i_0 + 1] = (-32767 - 1);
                            var_27 += -32765;
                            var_28 = 1;
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            arr_38 [9] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((!(arr_5 [i_0] [i_0] [i_0 - 1] [i_0])));
                            var_29 |= 10838;
                            var_30 += (~1843010878);
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_31 += (~var_4);
                            arr_43 [0] [i_6] [i_7] [i_6] = (!262143);
                        }
                        var_32 = (arr_22 [i_8] [i_7 - 4] [1] [i_0]);
                    }
                }
            }
            var_33 = (~18484);
        }
        var_34 = (arr_17 [i_0] [11]);
    }

    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_35 = (max(var_35, (arr_45 [14])));
        var_36 = ((4294967274 ? -22 : 10696));
        var_37 = (((-(arr_44 [i_13] [i_13]))));
    }
    #pragma endscop
}
