/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = (((((~(~137654101)))) ? (arr_0 [i_0]) : (max((min((-9223372036854775807 - 1), (arr_1 [i_0]))), (min(10462992356171285228, 2883362602))))));
        arr_2 [i_0 - 2] [i_0] = (((((((14863031584173850189 ? var_8 : 78))))) & ((((~(arr_0 [i_0]))) ^ 3108782359))));
        var_18 = (max((((((1507535891 ? (arr_1 [i_0]) : 137654101))) ? (arr_1 [i_0]) : var_7)), (max((min(71, (arr_0 [i_0]))), -3583712489535701426))));
        var_19 += ((((max((~var_13), (arr_0 [4])))) ? (((-(!var_1)))) : (min(9057188737873209590, ((96 ? 137654101 : (arr_1 [14])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = ((14863031584173850189 ? (arr_3 [i_0] [i_0 + 1] [i_1]) : ((var_10 ? var_14 : (arr_1 [i_0])))));
            var_21 += ((arr_0 [10]) / 18446744073709551615);
            var_22 = -var_9;
            arr_6 [i_0] [i_1] = 3583712489535701426;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_23 = (((137654105 / var_4) ^ (max((arr_5 [i_0 - 1] [i_0]), (arr_5 [i_0 - 1] [i_0])))));
            var_24 = ((((min((!var_5), (max(var_16, (arr_5 [i_0] [i_0])))))) ? var_15 : 14863031584173850189));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_25 = ((14863031584173850192 ? 18446744073709551595 : (arr_10 [i_0])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_26 = 3583712489535701428;
                            arr_21 [i_0] [i_3] [i_4] [i_0] [i_0] = (~var_3);
                            var_27 = (min(var_27, ((((arr_3 [18] [i_4] [14]) | 14863031584173850201)))));
                            var_28 = ((29 ? 137654101 : 23));
                            var_29 = (min(var_29, (!var_2)));
                        }
                    }
                }
            }
        }
    }
    var_30 = ((((((var_16 ? -137654115 : var_11)))) ? var_16 : (((max(22524, var_3)) ^ (((min(var_11, -22))))))));
    #pragma endscop
}
