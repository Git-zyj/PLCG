/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1 - 2] = ((!(((~(arr_0 [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (min(((~(max(19026, (arr_3 [i_0] [i_1] [i_2]))))), (((arr_1 [i_3]) ? (arr_3 [i_1 + 1] [i_1 - 1] [i_0 - 2]) : (((min((arr_8 [i_0 - 1] [i_0] [i_2] [i_1] [i_4]), (arr_10 [i_0 - 1] [i_1] [i_2] [i_2] [i_3] [i_4])))))))));
                                arr_12 [i_2] = (arr_11 [i_0 - 2] [i_2]);
                            }
                        }
                    }
                    arr_13 [i_2] [i_1] [i_2] [i_2] = (((((!1) && (var_9 && 46493))) ? (arr_0 [i_0 + 1]) : ((max((max(var_1, (arr_0 [i_0 + 1]))), (var_5 == 0))))));
                }
            }
        }
    }
    var_13 = -72;

    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_18 [i_5 - 1] = (((arr_3 [i_5] [i_5 - 1] [i_5 - 1]) ? (arr_16 [i_5 - 1]) : (max(var_5, (arr_4 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])))));

        for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_14 = (max(1671283189028427531, 1));
            arr_21 [i_5] [i_6] [i_6] = (arr_19 [i_5 - 1] [i_6 - 1]);
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                arr_28 [i_5] [i_7] [i_8] = var_5;
                var_15 = ((!(arr_24 [i_7 + 1])));
                arr_29 [i_5] [i_7] [i_8] = (((arr_19 [i_5 - 1] [i_5 - 1]) ? var_9 : (1367388449 || 0)));
            }
            var_16 = (min(var_16, (arr_24 [i_5 - 1])));
            var_17 = (~15210764268949652204);
        }
        for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        arr_38 [i_5] [i_9] [i_9] [i_11] [i_11] [i_9] = ((+(min((arr_32 [i_5 - 1] [i_9]), var_2))));
                        arr_39 [i_9] = max((!-19026), var_2);
                        var_18 = ((((max((arr_17 [i_5 - 1]), var_4))) ? ((9223372036854775802 << (((arr_8 [i_5 - 1] [i_9 - 1] [i_9] [i_10 + 1] [i_10 - 1]) - 1)))) : (((((arr_17 [i_5 - 1]) > (arr_8 [i_5 - 1] [i_9 - 1] [i_10 + 4] [i_10 + 1] [i_10 - 1])))))));
                    }
                }
            }
            var_19 = ((((4 ? (!67108863) : (59 % 1))) > (!var_0)));
            arr_40 [i_5] [i_9 - 1] [i_9] = ((~((((arr_36 [i_5] [i_5 - 1] [i_5 - 1] [i_9] [i_9]) != (arr_36 [i_5 - 1] [i_5 - 1] [i_9] [i_9] [i_9]))))));
        }
        for (int i_12 = 2; i_12 < 20;i_12 += 1) /* same iter space */
        {
            arr_43 [i_5 - 1] = (!var_10);
            arr_44 [i_12] = (arr_33 [4] [i_12] [i_5 - 1] [4]);
        }
    }
    #pragma endscop
}
