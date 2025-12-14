/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 75;
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_21 += var_14;
            var_22 = (((arr_1 [i_1 - 1]) ? 29 : 11972));
            var_23 = (arr_1 [i_1 + 3]);
            var_24 = 24289;
        }
        var_25 = (!(((((max(-9, (arr_2 [i_0] [i_0])))) ? ((var_11 ? (arr_2 [i_0] [i_0]) : 22113)) : 22113))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_26 = max(11981, (((!(arr_7 [i_2 - 1])))));
        var_27 |= (min((min(var_0, (arr_0 [i_2]))), (((arr_0 [i_2 + 1]) ? ((var_14 ? (arr_0 [i_2 + 1]) : var_15)) : var_2))));
        var_28 = ((!(((~(max(113, (arr_7 [i_2]))))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_29 = ((-7387765750810993319 ? (((arr_13 [i_3 + 2] [i_3]) ? (arr_2 [i_3 + 3] [i_3]) : (arr_13 [i_3 + 3] [4]))) : (((min((arr_8 [7]), var_7))))));
                        var_30 = arr_5 [1] [i_3 + 3] [i_5 - 1];
                        var_31 = ((+(((!211) ? (arr_12 [i_3] [i_4] [i_5 - 1]) : -113))));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_32 = var_14;
                        var_33 = ((((((min(44, 53567))))) ? 43425 : ((max(22110, 49317)))));
                    }
                    var_34 = (max(var_34, ((-(min(-249, (arr_8 [i_5])))))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_35 = 160;
                        var_36 = ((var_0 ? -99 : (arr_21 [i_3] [i_3] [i_3 + 1] [i_3 + 1])));
                        var_37 += var_18;
                        var_38 = var_13;
                    }
                }
            }
        }
    }
    var_39 = 55285;
    #pragma endscop
}
