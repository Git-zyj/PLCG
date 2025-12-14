/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [1] = ((-22 ^ (110 | -13428)));
        var_17 = (max(var_17, (!-9)));
        var_18 = ((arr_3 [i_0 + 1]) ? 11907527587511331649 : (arr_3 [i_0 - 1]));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 = (min(var_19, (((((-(((-9223372036854775807 - 1) ? 0 : 0)))) % ((((min((arr_5 [i_1]), (arr_6 [i_1])))) ? (35 <= 11907527587511331623) : (((!(arr_0 [15])))))))))));
        var_20 = (min(((min(11907527587511331623, (arr_3 [i_1])))), -65535));
        arr_7 [i_1] [i_1] = 1239332476;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_21 = (min(var_21, (((-12754436667697483779 > (arr_2 [i_1]))))));
            arr_11 [i_1] [1] = arr_6 [i_2];
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            var_22 -= arr_10 [i_3 - 4] [i_1] [i_1];
            var_23 = (((arr_10 [i_1] [3] [i_3 - 4]) | (arr_10 [1] [i_3] [i_3 + 3])));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            arr_17 [i_4] [i_4] [i_4] = ((!(-2147483647 - 1)));
            var_24 = (min(var_24, (((4294967295 / (arr_15 [i_1] [4]))))));
            var_25 = (max(var_25, ((((arr_0 [i_1]) >= ((0 ? (arr_5 [i_1]) : 5317227300255577325)))))));
        }
    }
    var_26 -= (max((((var_6 / 1) ? ((1574035989 ? var_2 : 2960843156)) : (5448463141155034851 && var_6))), var_3));
    var_27 = (min(((!(var_14 ^ 4294967264))), ((((0 ? 90 : 0)) < -var_5))));

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_20 [i_5] = max(((-(max(2147483647, 1)))), (((arr_18 [i_5]) ^ (arr_18 [i_5]))));
        var_28 = (((((!((max(0, 6539216486198219971)))))) + (((((((arr_18 [i_5]) && -17331))) > (!144))))));
        var_29 = (min((((arr_18 [i_5]) - (arr_18 [i_5]))), (((arr_19 [i_5] [i_5]) + (arr_19 [i_5] [i_5])))));
        arr_21 [i_5] [i_5] = (((min(((1 ^ (arr_2 [i_5]))), (((arr_1 [i_5]) ? (arr_19 [i_5] [i_5]) : (arr_2 [i_5])))))) || ((min((65528 + 1702763272), 0))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        var_30 = (((((1 + (arr_22 [i_6] [i_6])))) ? ((-(arr_22 [i_6 + 1] [i_6 + 1]))) : (((arr_22 [i_6] [i_6]) - (arr_22 [i_6] [i_6])))));
        var_31 = (max(var_31, (-32767 - 1)));
        var_32 = (24 | 1);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_35 [i_6] = 7;
                                arr_36 [3] [3] [3] [i_6] [i_9] [i_6] = (609540543 > (arr_23 [i_6 - 1]));
                                var_33 -= ((-2147483647 > (1 || 4065091630)));
                                var_34 = (((((4 ? 1773072369 : 109))) ? 68 : (!8)));
                                var_35 = ((((58338795 ? 0 : (arr_34 [i_9] [i_10]))) < (((4294967280 ? 1 : -14392)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_36 = ((-(!18446744073709551615)));
                                arr_42 [i_6] [i_7] [i_8] [i_11] [i_12] = (((arr_28 [i_6 + 1] [i_6] [i_8 + 2] [i_6 + 1]) == (arr_28 [i_6 - 1] [i_8] [i_8 - 2] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
