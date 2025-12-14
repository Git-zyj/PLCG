/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_15 ? var_9 : var_15)), var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = var_9;
                arr_5 [i_0] [i_0] [i_1] = ((+(((arr_3 [i_0 - 2]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))));
            }
        }
    }
    var_20 = var_4;

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_21 *= (!var_5);
        var_22 = (max(var_22, ((max((arr_3 [i_2]), 2147483647)))));
        var_23 &= (((arr_0 [i_2]) ? (arr_3 [i_2]) : (((arr_1 [i_2] [i_2]) ? ((-202668539 ? (arr_0 [i_2]) : (arr_4 [i_2] [i_2]))) : (arr_7 [i_2] [i_2])))));
        var_24 = (arr_7 [i_2] [i_2]);
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_25 = ((-(arr_9 [i_3 + 1])));
        var_26 = var_8;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (((-202668539 ? -202668539 : 2147483634)))));

        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            var_28 = ((((((max(var_3, (arr_7 [i_4] [i_5])))) ? var_1 : (((min(var_10, (arr_16 [i_4] [i_5])))))))) ? (!-2147483635) : var_11);
            var_29 = (min(var_29, (arr_10 [i_4])));
        }
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_30 += (min((1 && 1073676288), 823555709));
            arr_20 [i_4] [i_4] [i_6] = (arr_8 [i_4] [i_6 + 1]);
            arr_21 [i_4] [i_4] [i_4] = (min(0, (((4294967295 - (arr_19 [i_6 - 2]))))));
            var_31 = (min(var_31, ((((((-(arr_3 [i_6 + 1])))) ? (arr_7 [i_6 + 2] [i_6 - 1]) : var_6)))));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_32 = (arr_16 [i_7] [i_7]);
        var_33 = (max(var_33, ((114 ? (arr_18 [i_7]) : (arr_23 [i_7] [i_7])))));

        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            arr_28 [i_8] [i_8] = var_4;
            var_34 = -2147483637;
        }
        for (int i_9 = 4; i_9 < 8;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    {
                        var_35 *= ((!(114 | var_4)));
                        var_36 = arr_22 [i_11] [i_9];
                        arr_38 [i_9] [i_9] [i_10] [i_11] = 118;
                        arr_39 [i_10] [i_10] [i_10] [i_9] = 614116882;
                    }
                }
            }
            var_37 = ((33763217 ? var_8 : (arr_16 [i_7] [i_9])));
            var_38 = (min(var_38, (arr_10 [i_7])));
            var_39 = (min(var_39, (arr_34 [i_7] [i_7])));
            var_40 = var_12;
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 9;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_41 = (-(arr_47 [i_7] [i_12] [i_14 - 2] [i_14] [i_14 - 1] [i_14 - 1]));
                            var_42 = ((((((arr_42 [i_7] [i_14] [i_15]) + (arr_30 [i_15])))) ? (arr_40 [i_14] [i_14 - 2]) : (!var_4)));
                        }
                    }
                }
            }
            var_43 |= (((1 + -33763218) ? (((arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ^ 3145728)) : ((((arr_3 [i_7]) ? 1742483777 : (arr_1 [i_7] [i_12]))))));
        }
        var_44 = (min(var_44, (((arr_1 [i_7] [i_7]) / 1449233233))));
    }
    #pragma endscop
}
