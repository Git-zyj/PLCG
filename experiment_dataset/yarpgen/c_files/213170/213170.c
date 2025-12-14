/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_17 = (((~1) <= (min(86, (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [15]) : 90))))));
        arr_4 [i_0] = -86;
        arr_5 [i_0] = 166;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_18 = (((arr_3 [11] [i_1]) ? ((((((arr_2 [i_1] [i_1]) ? 116 : (arr_1 [i_1] [i_1])))) ? (arr_3 [i_1] [i_1]) : ((min(107, (arr_1 [4] [i_1])))))) : (166 / 27713)));
        arr_8 [i_1] = (~(arr_2 [i_1] [i_1]));

        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_19 = (arr_7 [i_1] [i_1]);
            arr_11 [i_1] = 20281;
            var_20 = -17686;
            var_21 = var_0;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] [6] [i_1] = ((((-86 + 90) - 0)));
            var_22 = ((((((var_12 ? var_11 : (arr_2 [i_3] [i_1]))))) ? ((((((arr_13 [14] [i_3] [5]) ? -86 : (arr_10 [13] [i_3])))) ? (!19998) : (max(86, var_2)))) : ((((!((((arr_6 [i_1] [i_1]) ? 138 : 86)))))))));
        }
        arr_15 [i_1] [i_1] = ((~((-((((arr_9 [i_1] [18]) >= (arr_7 [19] [i_1]))))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_31 [i_8] [i_4] [i_4] = ((((~((~(arr_0 [i_6 - 1] [i_4])))))) && -2210803002975293989);
                                arr_32 [i_4] [i_5] [i_6] [0] [i_8] [i_4] = (arr_20 [i_7 - 2] [i_7 - 2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_23 = (max(((max(var_7, (arr_37 [i_4] [i_4] [i_4])))), ((~(arr_0 [i_5] [15])))));
                                var_24 = (max((135 || 0), (min(22368, -2001094034))));
                            }
                        }
                    }
                    var_25 &= (((((((min(22428, (arr_20 [i_4] [19])))) <= var_7))) ^ 86));
                    var_26 = ((((((((arr_2 [i_5] [i_6]) ? 2097151 : (arr_28 [i_4] [17] [i_4])))) ? (max((arr_16 [i_6 - 1]), var_1)) : 86)) - (arr_25 [i_6 - 1] [8] [i_6 - 1] [i_6 + 1] [i_6])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 21;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_48 [i_4] [i_4] [i_12 - 1] [i_4] [i_13] = 13;
                        var_27 -= ((((+(((arr_1 [i_13] [i_11]) - (arr_43 [i_4] [i_4] [2])))))) != (max((min((arr_24 [16] [i_11] [16]), -826)), ((max(var_15, var_8))))));
                        var_28 *= (!var_0);
                        var_29 = -86;
                    }
                    for (int i_14 = 1; i_14 < 22;i_14 += 1)
                    {
                        var_30 = -203735964;
                        arr_53 [i_4] [i_11] [i_4] [13] [i_12 - 1] [i_12 - 1] = 213;
                        var_31 = (max(var_31, 93));
                        var_32 = (min(var_32, ((((arr_7 [i_4] [i_11]) <= ((((6886759500740012698 < 1) && 90))))))));
                    }
                    var_33 = var_9;
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        arr_56 [1] [i_15] = (((((3702004418 ? (arr_21 [i_15] [i_15] [22] [i_15]) : (arr_21 [i_15] [i_15] [i_15] [i_15])))) ? (arr_21 [i_15] [i_15] [17] [i_15]) : (arr_21 [i_15] [i_15] [1] [21])));
        arr_57 [6] = (max((arr_33 [6] [20] [i_15]), (arr_33 [i_15] [16] [i_15])));
    }
    var_34 = 0;
    var_35 &= ((((-((3909829478 ? 11559984572969538918 : 6311)))) % var_6));
    #pragma endscop
}
