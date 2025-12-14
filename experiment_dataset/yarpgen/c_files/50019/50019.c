/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((min((min(var_8, var_5)), var_1))), var_3));
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(var_9, ((((arr_5 [i_0] [i_1]) - (max(var_4, 2147352576)))))));
                var_15 = (var_9 > var_7);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_16 &= 17765;
                        var_17 = ((!(arr_12 [i_0] [i_0] [i_2] [i_0])));
                    }
                    var_18 &= (arr_6 [8] [8] [i_1]);
                    var_19 = (((((((max(15, 2147352588))) ? (100 > 91) : ((max(0, 3)))))) ? (var_7 || var_0) : ((max(var_2, (arr_2 [9] [i_1] [9]))))));
                    var_20 = var_11;
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_21 &= -12739;
                                var_22 ^= ((~((max((arr_11 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_4] [i_5]), (arr_11 [2] [i_0 - 4] [2] [i_0 - 3] [i_4] [i_1]))))));
                                var_23 = (arr_2 [11] [i_2] [i_4]);
                                var_24 &= ((!((min((arr_11 [i_4 - 4] [i_5 + 1] [i_5] [i_4 - 4] [i_5 - 2] [i_1]), (max((arr_8 [i_0] [13]), -8071535818263167420)))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        var_25 &= (((((~(arr_19 [i_6 - 1])))) ? (((((arr_19 [i_6 + 3]) == var_6)))) : (arr_18 [i_6 + 1] [i_6])));
        var_26 = ((((!(187 / -32138))) ? (max(var_6, 35)) : (((var_10 ? 41695 : 94)))));
        var_27 ^= (((arr_18 [i_6] [i_6]) / (arr_18 [i_6 + 3] [i_6 + 1])));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                {
                    var_28 ^= ((((min(59, ((106 ? var_6 : var_3))))) ? (arr_20 [8] [i_7 - 1] [i_7]) : (min((arr_25 [i_8 + 3] [0] [i_8] [i_8]), (arr_25 [i_8 + 3] [1] [4] [1])))));
                    var_29 = (max(var_29, (((min(141, (arr_23 [8] [i_7] [i_8] [i_8])))))));
                    var_30 *= ((((((((132 >> (250 - 239)))) ? (2212687545 * 3804) : (0 <= 5952150851596823058)))) ? (((!((118 > (arr_20 [6] [6] [i_8])))))) : -22235));
                    var_31 |= ((!(((((min(-2147483622, var_5))) ? (arr_24 [i_7]) : ((var_10 ? var_2 : (arr_26 [i_6] [i_6] [i_7] [2]))))))));
                    var_32 = (~-4506172123136553523);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_33 = ((arr_24 [i_9]) ? (arr_24 [i_9]) : (arr_24 [i_9]));
        var_34 = (max(var_34, (~9303225207597035562)));
        var_35 = (-(!4506172123136553511));
        var_36 |= ((!(arr_25 [i_9] [i_9] [1] [i_9])));
        var_37 = 4611681620380876800;
    }
    #pragma endscop
}
