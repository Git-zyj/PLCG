/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (~var_9)));
    var_12 = (max((((~((max(var_0, -19469)))))), 2437320949));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 *= min((((-9 ? (1 < 14191) : var_0))), (((((arr_1 [2]) || var_3)) ? ((var_5 >> (((arr_0 [i_0]) - 59224)))) : (!var_4))));
        var_14 = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_5 [i_1] [i_1]) & ((var_3 ? (arr_5 [i_1] [i_1]) : 3773301403))));
        var_15 = (arr_3 [i_1]);
        var_16 = ((arr_5 [i_1] [i_1 - 3]) ? var_1 : (arr_5 [i_1] [i_1 + 1]));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_17 = ((((((9114220277231818887 ? -3820 : 14191)) + 2147483647)) << (var_3 - 9054803076455196625)));
            arr_11 [i_1] [i_2] [i_1] = (~195);
            arr_12 [i_1] = 51620;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_18 = var_10;
            var_19 = (min(var_19, var_5));
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_19 [i_4] [i_5] = arr_8 [i_4] [i_5];

            for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
            {
                var_20 *= ((((arr_14 [i_5]) ? (arr_14 [i_4 - 1]) : var_7)));
                arr_23 [i_4] [i_5] [i_5] [i_4] = ((!((((arr_8 [i_4 - 1] [i_5 + 1]) ? (arr_17 [i_4 - 1]) : (arr_17 [i_4 - 1]))))));
                var_21 = ((((max((((arr_20 [i_4] [i_5 - 1] [19]) ^ 10320)), -5443))) && (-23407 >= 0)));

                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    var_22 = (min(var_22, ((max((5461 && var_10), (arr_13 [i_6] [i_5 + 1]))))));
                    var_23 = (((((arr_18 [i_5 + 1] [i_6] [i_7]) ? (arr_18 [19] [i_5 + 1] [i_6 + 2]) : (arr_16 [i_4 - 1]))) << ((((51344 ? 14186 : var_4)) - 14161))));
                    var_24 = var_1;

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_25 = ((-61 ? ((min(18503, 62))) : ((max((arr_8 [i_6 + 1] [i_5 - 1]), (arr_8 [i_6 + 1] [i_5 - 1]))))));
                        var_26 = var_3;
                    }
                }
                var_27 = ((var_3 - (max((arr_5 [i_5] [22]), 960))));
            }
            for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_28 = (max(var_28, 72));
                            var_29 = (max(var_29, (arr_10 [i_4])));
                            var_30 = (((((255 << (248 - 229)))) ? -87 : ((-23407 ? -9194 : -1))));
                            arr_39 [i_4] [i_4] [i_5] [i_10] [i_11] [i_10] = ((min(27364, ((65535 ? (arr_9 [i_11] [i_5] [i_4 - 1]) : var_0)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_47 [i_5] = (max(var_3, (((arr_9 [i_5] [i_5] [i_9 + 3]) ^ (arr_17 [i_9 + 4])))));
                            arr_48 [i_9] [i_5] = ((-(((~var_2) & 0))));
                            var_31 = 1;
                        }
                    }
                }
            }
            arr_49 [i_5] = (arr_15 [i_4]);
            var_32 *= ((~(var_1 || var_3)));
        }
        arr_50 [i_4] = (min((var_7 || var_4), ((~((var_8 ? var_1 : 24467))))));
    }
    #pragma endscop
}
