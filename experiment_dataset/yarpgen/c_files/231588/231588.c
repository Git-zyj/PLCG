/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_3] = var_3;
                        var_17 = ((max(((13453575374889908682 ? 18446744073709551615 : 4476463102193538667)), var_12)));
                        var_18 = (min(var_18, ((var_4 & (((arr_1 [i_3 + 2]) ^ (((((arr_1 [0]) >= (arr_6 [6] [i_2])))))))))));
                        var_19 -= (max(((max(1552481908, -18562))), (((3 ? 3245893071928462306 : 10450)))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_20 = (min(-29731, (max(((13044 ? var_13 : (arr_6 [i_0] [i_0]))), ((max(var_13, -8402)))))));

                        for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_21 += (((((-1593057491 ? 6811327609967140526 : 18446744073709551615))) ? (((((!(arr_12 [i_0] [4] [0])))) | var_0)) : 13044));
                            var_22 = (max((arr_16 [i_0 + 3]), ((min((arr_13 [i_0] [i_0 + 1] [0] [i_0 + 2]), (arr_13 [i_0] [i_0 + 3] [i_0 + 3] [i_0]))))));
                            var_23 = (arr_2 [i_1] [i_4] [i_5 - 2]);
                        }
                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, ((((((arr_10 [5] [i_1] [i_2 - 3]) >= var_7)) ? (!var_2) : 859)))));
                            arr_19 [7] [i_0] [9] [i_4] [i_0] = (((arr_18 [i_2 - 2] [i_2 - 2] [i_6 - 1] [i_6 - 3] [i_6]) ? (arr_18 [i_2 - 3] [i_2] [i_6 + 1] [8] [i_6]) : (arr_18 [i_2 - 1] [i_2 - 1] [i_6 - 4] [i_6] [i_6])));
                        }
                        var_25 = 13795;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [5] [i_7] = (arr_3 [i_1] [i_1] [i_4]);
                            var_26 = (((((!17685024171097917787) ? (arr_15 [i_0 + 2] [i_1] [i_2] [i_1]) : (max(var_12, var_1)))) % var_16));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_27 = (max((((1564209349 || (arr_20 [i_8] [i_8] [i_4] [i_2] [i_1] [i_0] [4])))), (min(-1, 1045690126346530183))));
                            var_28 = (arr_4 [i_4] [0]);
                        }
                    }
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        var_29 = (arr_7 [i_1] [i_2] [i_9 + 1]);
                        var_30 = var_9;
                        arr_28 [i_9] [i_0] [i_0] = ((((((arr_16 [i_9 - 1]) ? (var_12 | var_11) : ((min(13048, (arr_5 [i_0] [i_0] [i_2]))))))) ? (arr_7 [4] [2] [i_9]) : 761719902611633828));
                    }
                    var_31 -= ((-27550 ? var_13 : 2601501839));
                    arr_29 [i_0] [i_2] [i_2] = 0;
                    arr_30 [i_0] [0] [i_0] = (max((max(2044, -14825)), 1));
                }
            }
        }
    }
    var_32 = (max((-9223372036854775807 - 1), 1));
    #pragma endscop
}
