/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_1, ((!(arr_1 [i_0] [i_0 + 1])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_12 += (((arr_3 [i_1]) ? ((((min(9010314609330617144, -2635105847469413680)) <= (!43)))) : ((-(arr_2 [4])))));
                        arr_11 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_0] = ((~((-((-(arr_6 [i_0] [i_0])))))));
                        var_13 += var_9;
                    }
                }
            }
        }
        var_14 = ((!((((((0 >> (34847 - 34822)))) ? ((var_1 ? var_1 : (arr_8 [i_0] [i_0] [i_0] [i_0]))) : 9188)))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = (min((max(3060348812, ((max((arr_6 [i_4] [i_4 + 1]), var_7))))), (((var_8 >= (arr_10 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]))))));

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_15 = ((((var_1 | ((var_5 ? (arr_1 [i_4] [i_4]) : var_7)))) % (arr_13 [i_4])));
            var_16 += (max(((((~var_1) ? (arr_16 [i_5 - 2]) : ((min(var_3, (arr_4 [i_4] [8]))))))), (min(((0 ? 11708 : -105642330937628289)), (arr_1 [14] [14])))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        var_17 = (-328579837 && 29088);
                        arr_25 [i_4] = (((arr_18 [i_6] [i_6]) || (((+(((arr_22 [i_7 + 1] [i_6] [i_4] [i_4] [i_4]) | (arr_23 [4] [i_7]))))))));
                        arr_26 [i_4] [i_5 - 1] [i_5] [i_6] [i_4] = ((((((~1366952662) ? -var_2 : var_1))) ? ((((arr_8 [i_4] [4] [3] [i_4]) || (arr_7 [i_7 - 1] [i_4 - 1] [i_4])))) : (--328579837)));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_30 [i_4] = max((arr_6 [i_4] [i_4]), -var_8);
            var_18 = (min(((((arr_22 [i_4 + 1] [i_4 + 2] [i_4 - 1] [i_4 - 1] [1]) < (arr_22 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4])))), ((40 ? (arr_22 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 2]) : (arr_22 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4])))));
            var_19 &= var_5;
        }
        arr_31 [i_4] = 2779746882029435313;
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_20 = ((((((arr_21 [12]) ? 230 : (arr_24 [i_9 + 2] [i_9 + 2] [i_9])))) ? (arr_7 [i_9] [i_9] [i_9]) : (!var_0)));
        arr_34 [i_9] = (((arr_8 [10] [i_9] [i_9] [i_9]) ? (165 / 5175835909743484662) : (arr_19 [i_9] [i_9 + 1] [2])));

        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            var_21 &= (arr_36 [i_10 + 1] [i_10 - 1]);
            var_22 = ((~(((arr_15 [i_9] [i_10]) ? -2635105847469413676 : (arr_28 [i_10 + 2])))));
        }
        var_23 -= ((((1904101086 ? 67 : 14706)) & (((arr_23 [i_9] [i_9]) ? var_0 : 25425))));
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        arr_39 [i_11] [i_11] = (((arr_37 [i_11]) - ((2635105847469413683 ? (arr_38 [i_11]) : var_5))));
        var_24 = (((((1 ? -var_0 : ((var_2 ? var_7 : (arr_37 [i_11])))))) ? ((max(21354, 0))) : 21354));
    }
    #pragma endscop
}
