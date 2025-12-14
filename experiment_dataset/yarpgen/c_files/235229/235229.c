/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_6);
    var_18 = (~var_4);

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = -7059634601688216010;
        arr_3 [i_0 + 1] [i_0 + 1] = var_12;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_19 = (((((-(arr_0 [i_1])))) ? var_8 : (min((arr_4 [i_1]), ((min(var_9, 3295750836)))))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_20 = (max(var_20, ((((!(arr_5 [6])))))));
            var_21 = (((max(var_10, (arr_4 [i_1]))) != (min((arr_5 [i_1]), (arr_7 [i_1] [i_2])))));
            var_22 = (max(170526625, 409));
            var_23 = (min(var_23, ((max((arr_8 [4]), (max((arr_8 [0]), var_6)))))));
            arr_9 [i_1] [i_1] = ((-(((!(!var_5))))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_12 [i_1] = min((min((arr_7 [i_1] [i_1]), (arr_0 [i_1]))), (arr_7 [i_3] [i_1]));
            var_24 = (min(var_24, -999216459));
            var_25 = (i_1 % 2 == 0) ? (((var_1 != (min((min(23787, (arr_10 [i_1] [i_1] [0]))), ((((((arr_11 [i_1] [i_1]) + 2147483647)) << (((arr_6 [i_1]) - 1712318005)))))))))) : (((var_1 != (min((min(23787, (arr_10 [i_1] [i_1] [0]))), ((((((((arr_11 [i_1] [i_1]) - 2147483647)) + 2147483647)) << (((((arr_6 [i_1]) - 1712318005)) + 1647329194))))))))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_26 = (max(var_26, (((!(arr_14 [i_1]))))));
            var_27 = (13118706671602638291 / 23786);
        }
        var_28 = var_7;
        var_29 = (max(var_29, (295801284 <= 108)));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        arr_19 [i_5] = (((arr_15 [i_5 - 1]) % (arr_15 [i_5 - 1])));
        var_30 = (((arr_15 [i_5 - 2]) ? (arr_16 [i_5 + 1] [i_5 - 1]) : var_11));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_25 [i_7] = ((!(arr_22 [i_6] [i_6] [i_7])));
            var_31 = (max(var_31, (~4006629990086129213)));

            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                var_32 *= 1;
                arr_29 [i_6] [i_7] [i_8 - 1] [i_6] = ((-1204846843 * (!var_16)));
                var_33 = ((arr_26 [i_8 - 2] [i_8 + 1] [i_8 - 2]) | var_2);
                var_34 = (max(var_34, (~var_9)));
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_35 ^= (arr_27 [i_6] [i_6]);

                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    arr_36 [i_6] = (arr_28 [i_6] [i_7] [14]);
                    arr_37 [i_6] [i_6] = var_1;
                    arr_38 [16] [i_7] [16] [16] [1] = (~var_10);
                    var_36 = (max(var_36, ((((arr_30 [i_6] [i_7] [i_9] [i_10 - 1]) & (arr_15 [i_7]))))));
                }
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    var_37 = (max(var_37, (((var_13 / (var_8 | 0))))));
                    arr_43 [i_6] [1] [i_6] [i_6] [17] = ((-(arr_39 [i_6] [i_6] [i_6] [i_6] [i_9] [i_11 - 1])));
                    var_38 = (min(var_38, var_11));
                    var_39 = (min(var_39, var_15));
                }
            }
            arr_44 [i_6] [i_6] [i_6] = ((!((((arr_34 [i_6] [i_6] [i_6] [i_6]) ? (arr_31 [i_6] [i_7]) : var_7)))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_40 = (min(var_40, (((!(((var_6 ? 3230744049 : var_8))))))));
            arr_47 [i_12] = (((!(arr_31 [i_6] [i_12]))));
            var_41 *= (arr_45 [i_6] [i_12] [i_6]);
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                var_42 = (max(var_42, (((((((arr_30 [12] [12] [12] [i_6]) - var_7))) / (arr_16 [i_13] [i_14]))))));
                var_43 -= (arr_50 [i_6] [i_6]);
            }
            arr_53 [i_6] [i_6] = (arr_41 [i_6] [13] [i_6] [i_6]);
            var_44 ^= var_10;
            var_45 = var_1;
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_46 = ((!((((arr_15 [i_6]) ? (arr_15 [i_15]) : (arr_15 [i_6]))))));

            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                arr_58 [i_6] [i_15] [i_6] [i_6] = (arr_49 [i_15] [i_16]);
                var_47 = (min(var_47, ((max(((-(max(var_9, var_3)))), (arr_41 [i_6] [i_6] [i_16] [i_6]))))));
            }
        }
        var_48 = (arr_57 [i_6] [i_6] [i_6]);
    }
    #pragma endscop
}
