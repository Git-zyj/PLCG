/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((224 ? var_2 : -6355))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_16 = (arr_2 [i_0 - 1]);

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_17 = (min(var_17, (4128768 <= 162533972)));
            arr_6 [i_0] = 1475525564;
            var_18 = (min(var_18, ((((~250) & (max(((0 - (arr_5 [i_0]))), -1726245227)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_1] = ((~(max(((7693936153644477458 ? (arr_2 [i_3]) : 5498838084825005421)), 0))));
                        var_19 = ((((34590 ? -1220916859 : 418343872481694049))));
                        arr_13 [i_0] [i_1] [i_3] [i_3] = 192;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_20 = (max(var_20, 8191));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 6;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_21 = (arr_0 [i_5] [i_6]);

                        for (int i_7 = 4; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_22 = ((!(arr_25 [i_5] [i_4] [i_5] [i_6] [6])));
                            arr_27 [i_5] [i_4] = (37811 >> (-7 + 25));
                            var_23 = (max(var_23, ((((arr_23 [i_0] [i_0] [i_0] [i_4]) && 32768)))));
                            var_24 = (((arr_17 [i_0 + 2] [i_5 + 1]) ? (((arr_4 [i_5]) ? 37811 : 27724)) : ((((arr_4 [i_0]) != (arr_9 [i_0] [i_0] [i_5] [i_6]))))));
                        }
                        for (int i_8 = 4; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_5] [i_4] [i_6] [i_6] [i_8] = (arr_1 [i_5 + 3]);
                            var_25 = (((-2147483647 - 1) ? 37818 : -80));
                        }
                    }
                }
            }
            var_26 = (min(var_26, 7301));
            var_27 = (~-1988091205);
            arr_32 [i_0] [i_4] = (((-1363688251 ? 27712 : 18)));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    {
                        var_28 = (min(var_28, 18446744073172680704));

                        for (int i_12 = 3; i_12 < 9;i_12 += 1)
                        {
                            arr_43 [i_0] [i_0] [i_9] [i_11 + 1] [5] = 1;
                            var_29 = (-(arr_28 [i_0] [i_0] [i_0 - 1] [i_9] [i_0] [i_0] [i_0]));
                            arr_44 [i_0] [i_0] [i_10] [i_9] [i_12] = (((arr_7 [i_0 + 2] [i_11 + 1] [i_12 - 3]) || (arr_16 [i_0] [i_0 + 1])));
                        }
                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            var_30 += (~-1220916859);
                            var_31 = -26709;
                            arr_47 [i_0] [i_11] [i_0] [i_11 + 1] [i_11] [i_9] [i_11] = (arr_22 [9] [i_11] [i_9]);
                        }
                        for (int i_14 = 0; i_14 < 10;i_14 += 1)
                        {
                            var_32 = (-((27724 ? -23 : (arr_14 [i_14] [i_9]))));
                            arr_51 [i_9] [i_10] = -27725;
                            var_33 = (min(var_33, (((164 ? (((arr_28 [i_10] [i_11] [i_10] [i_14] [i_9] [i_0] [i_0]) ? 1193217147 : 17048276037148848428)) : ((((arr_36 [i_0] [i_9] [i_10] [i_0]) ? -26711 : -1997413709624106940))))))));
                            var_34 = (--17048276037148848428);
                        }
                        for (int i_15 = 1; i_15 < 6;i_15 += 1)
                        {
                            var_35 = (max(var_35, -1997413709624106940));
                            var_36 -= 8851235483058637188;
                        }
                    }
                }
            }
            var_37 = (arr_1 [i_9]);
        }
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        arr_59 [i_16] = 32767;
        arr_60 [i_16] = (arr_55 [i_16]);
    }
    var_38 = var_2;
    #pragma endscop
}
