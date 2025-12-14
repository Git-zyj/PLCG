/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 += ((0 ? 12705 : -28561));
                    var_18 = (var_6 + var_9);
                    var_19 &= (((((3714360014043864449 | var_0) ^ (~var_7))) ^ (arr_0 [i_0] [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_20 &= ((((-3714360014043864450 ? ((1 / (arr_17 [i_6 - 1] [i_5] [i_5] [i_3]))) : -14)) <= (((!((max((arr_10 [i_5]), (arr_11 [i_4])))))))));
                            var_21 = (((((~(arr_7 [i_6 + 3])))) ? ((((2340622652 || (arr_7 [i_6 + 2]))))) : (((arr_7 [i_6 + 2]) ? (arr_7 [i_6 - 1]) : (arr_7 [i_6 + 2])))));
                            var_22 = 12;
                        }
                    }
                }
                var_23 *= (((((!(arr_14 [1] [i_3 + 1] [1])))) != var_7));
                var_24 *= 215;
            }
        }
    }

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_25 = ((((((((arr_8 [i_7]) + 2340622652))) <= 3714360014043864464)) || var_3));
        var_26 = (min((3714360014043864433 != 1), (((arr_15 [i_7] [i_7]) ? 3754367987984922729 : var_6))));
        var_27 = 0;
        var_28 = ((((arr_3 [18] [i_7] [i_7]) || (arr_1 [1]))));
    }
    for (int i_8 = 4; i_8 < 19;i_8 += 1)
    {
        var_29 = (max(var_29, (~-1786911915)));
        var_30 += 40683;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                {
                    var_31 = (min(var_4, var_15));
                    var_32 *= (min(var_9, ((((arr_11 [i_8 - 2]) != (arr_6 [i_8]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 16;i_12 += 1)
            {
                {
                    var_33 = ((+(min((((arr_17 [6] [i_11] [i_8] [i_8]) ? (arr_26 [i_8] [i_11] [i_12 + 4]) : (arr_28 [i_12] [i_11] [i_12]))), ((min((-2147483647 - 1), -89)))))));
                    var_34 = 3714360014043864464;
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_35 = (((!(((arr_39 [i_8] [i_11] [i_12 + 4] [i_13 + 2] [i_14]) && var_1)))));
                                var_36 = 32747;
                            }
                        }
                    }
                }
            }
        }

        for (int i_15 = 1; i_15 < 17;i_15 += 1)
        {
            var_37 = (((~(!var_4))));
            var_38 = (min(((var_12 ? (2001435328272972372 <= var_11) : (((var_11 <= (arr_36 [i_8 + 1] [i_15] [i_15] [i_15] [i_15] [i_15])))))), (((32761 != 85) ? 318344588 : (~var_4)))));
            var_39 = (((((((arr_42 [i_8 - 4] [i_8 - 3] [i_8 - 2]) ? -64 : 1786911910)) + 2147483647)) >> 1));
        }
    }
    var_40 = 3714360014043864443;
    #pragma endscop
}
