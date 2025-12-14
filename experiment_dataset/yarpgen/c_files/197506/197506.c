/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((120 ? -1798138071 : var_12)), var_8));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_16 |= ((-var_6 == (min((((var_2 ? (arr_0 [i_0]) : var_0))), 0))));
        var_17 = -1;
        arr_3 [i_0] = (var_12 ? ((min(-2551085584441400701, 2551085584441400700))) : -30159);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((((((-(arr_4 [i_2] [i_1 - 1] [i_0])) == (!var_1))))));
                    arr_11 [i_2] [i_2] |= (!-6843281983785104407);
                    var_19 = 2147483647;
                }
            }
        }
        var_20 = (max(var_20, 18446744073709551613));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] |= var_6;
        var_21 = (arr_8 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_23 [i_6] [12] [i_4] [i_3] = (max((((((var_12 ? 16597931373303986639 : 32767))) ? ((1 ? -3581572112716695553 : (arr_14 [i_5] [i_6]))) : (((max(-30159, var_2)))))), -var_8));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_22 = (min(var_22, ((((max((max((arr_22 [i_7] [i_6] [10] [10] [i_4] [i_3]), 4769410777012340492)), -1103585258)) / ((((min(var_3, var_3))) ? (arr_19 [1]) : var_9)))))));
                            arr_28 [i_4] [i_7] = (64971 / ((1447316528330048868 ? 54636 : 1)));
                            arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] = 0;
                            var_23 = ((max((min(18446744073709551615, var_12)), ((var_14 ? 3 : -30174)))));
                        }
                        var_24 = ((((((23895 ? (arr_16 [i_3] [i_4] [i_5]) : -48))) ? (~var_13) : 25857)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
