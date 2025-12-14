/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((-1 - (arr_0 [i_0]))) ^ (((((82 * (arr_0 [i_0]))) < 176)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 = var_7;

            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_1] [12] [i_0] |= -276099202;

                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_19 &= ((((max(4380866641920, 102))) ? (((19918 < ((max(-65, 64)))))) : (arr_1 [i_0])));
                        var_20 &= (((arr_13 [i_3] [12] [i_3] [i_3 + 2] [i_3]) < (((min((var_2 < 16), 3315990387))))));
                        var_21 = (max(var_21, (((16 & (((arr_4 [i_2 + 1] [i_3 - 2]) & 1)))))));
                        var_22 = (max(var_22, ((((((((min((arr_6 [i_0] [i_1] [4]), var_11)))) < (((arr_5 [i_0]) ? (arr_0 [i_4]) : 6454841404130979436)))) ? ((var_15 ^ ((((arr_0 [i_0]) - var_1))))) : (--110))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_23 = (max(var_23, var_10));
                        var_24 &= (arr_1 [i_3 + 2]);
                        arr_18 [i_1] [i_0] [i_3] [i_2] [i_1] [i_1] = (var_14 < (((arr_2 [i_2 + 2]) ? ((max(var_1, 0))) : (0 != -104))));
                        arr_19 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] [i_5] = (((arr_3 [i_0] [i_1] [i_5]) ^ (((-(arr_16 [i_0] [i_1] [i_0] [i_5]))))));
                    }
                }
                for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    arr_23 [0] |= (max((((((!(arr_22 [i_2])))))), (((var_14 < 31) ? (((max(var_9, -28391)))) : var_4))));
                    var_25 = (min(var_25, var_0));
                }
                for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [i_2 + 2] [i_7] [i_1] [i_0] = ((-116 ? ((max(-85, -7549371230970996384))) : 182));
                    var_26 = ((!((!(((var_13 ? var_4 : -1747)))))));
                    var_27 = var_4;
                }
                var_28 = var_3;
            }
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_29 = (arr_10 [i_0] [i_1] [i_0] [i_0] [i_8] [i_1]);
                var_30 = (((min(-33, var_12))));
            }
            var_31 = ((((min(var_10, (min(-5722584231474476663, 9218868437227405312))))) ? ((max(((-122 ? 74 : -4144)), ((var_11 ? (arr_7 [i_1] [i_1] [i_1]) : var_9))))) : (((var_0 * 11458) ? var_7 : (max(-24671, (arr_8 [i_1] [i_1])))))));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                {
                    var_32 = (max((((arr_25 [i_10 + 1] [10] [i_10 + 2] [10] [i_9]) >> (((arr_13 [i_10 - 1] [8] [i_10 + 1] [i_10] [i_10 - 1]) - 6397651473481886408)))), ((((~(-2147483647 - 1)))))));
                    var_33 = (max(var_33, (((!(arr_7 [i_0] [i_9] [i_9]))))));
                    var_34 = (max(var_34, (((((-102 - 1) ^ (((arr_13 [i_0] [1] [i_10] [i_9] [i_9]) ? var_12 : -88)))) * (((((37698 ? (arr_29 [i_9] [i_9] [2] [i_9]) : (arr_11 [i_0] [i_10]))))))))));
                }
            }
        }

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_35 = (((max(-71, ((var_7 ? var_4 : var_1))))) ? (((max(-113, (arr_25 [i_0] [i_11] [i_11] [2] [i_11]))))) : var_0);
            var_36 -= (((((((arr_26 [i_0] [i_11] [i_11] [i_11]) < 1)) ? var_13 : (max(24693, 120259084288)))) ^ ((-32749 ? var_12 : 0))));
            var_37 = (((18202427600571962789 < (-127 - 1))));
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            {
                arr_44 [i_13] = var_12;
                arr_45 [i_13] = var_10;
                var_38 *= (max(122, ((max(-28385, 53321)))));
            }
        }
    }
    var_39 = (min(var_39, var_5));
    #pragma endscop
}
