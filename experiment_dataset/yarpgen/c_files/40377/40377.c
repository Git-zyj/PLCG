/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min(1414137198566997042, var_8), (var_11 == var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (67 / 1);
        var_15 = 207;
        var_16 = (((arr_1 [i_0] [i_0]) * var_8));
        var_17 = (-(arr_1 [i_0] [i_0]));
        var_18 = (~var_1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = ((0 ? (arr_3 [i_1]) : (arr_2 [i_1])));
        var_20 = 8606837338027202110;
        arr_5 [i_1] = ((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : var_1);
        var_21 = (((arr_1 [i_1] [i_1]) != 6396674294769471457));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            arr_11 [i_2] [i_3] = ((-(((max(-1, var_4))))));

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_20 [i_2] [i_2 - 1] [i_3] [i_2 - 1] = (3171753640 ? 0 : 5);
                            var_22 = (((((arr_6 [i_2]) ? (arr_13 [i_6] [i_5] [i_4]) : var_6)) - ((((((~(arr_17 [i_5] [i_4] [0] [i_2])))) ? (!var_4) : var_3)))));
                            var_23 = (13 << (var_4 - 64645));
                            arr_21 [i_2] [i_3] [i_3 - 3] [i_4] [i_6] &= (((((((var_5 ? var_12 : var_3))) ? (min((arr_13 [5] [5] [i_4]), var_12)) : ((((arr_8 [i_4]) ? 31976 : 11))))) / ((4814762922677009190 >> (((arr_17 [9] [9] [i_2 - 1] [i_3 - 2]) - 6857460236491674865))))));
                        }
                    }
                }
                var_24 = 2750063325;
                var_25 = ((0 ? 9194899210570208660 : (((61197 ? (min(1880281646, (arr_9 [i_2] [i_3] [i_4]))) : (((((arr_15 [i_2] [i_3 + 1] [i_2] [18]) && var_5)))))))));
                var_26 = ((-7568155163259462675 | ((var_6 ? -5379095189678631847 : (-6804245674897095619 & var_2)))));
            }
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_27 = (((274875809792 ? 7 : ((1 ? 9223372036854775796 : var_3)))));
            arr_26 [i_2] &= ((((((3226350532 && 4) ? 15 : var_12))) ? (((var_8 ^ var_6) >> (-var_12 + 4279519739788423774))) : var_12));
            arr_27 [i_7] = 2242867659454554149;
        }
        arr_28 [i_2 + 1] [i_2 + 1] = ((!((min((var_6 && 7), var_2)))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                arr_33 [i_8] [i_9] = 7470834408561806131;
                var_28 = (~1);
            }
        }
    }
    #pragma endscop
}
