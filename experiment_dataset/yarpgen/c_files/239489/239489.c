/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((max(38, 4754151650839428736)))));
    var_19 = (min(var_19, 0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [1] [20] [15] [i_0] [i_2] [i_3] = (~((6591214414597553533 ? 4149673091 : 14670006660112513697)));
                        arr_12 [i_0] [4] [i_0] [i_0] = (min((min((arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [1]), (-4295807172125039008 - 217))), ((max(239, 57)))));
                        var_20 = (min(var_20, ((((((arr_3 [i_2 - 1] [i_2 - 1]) ? (arr_3 [i_2 + 1] [i_2]) : (arr_3 [i_2 + 1] [i_2 + 1]))) - var_2)))));
                    }
                }
            }
        }
        arr_13 [i_0] = ((-(((((65525 ? (arr_10 [i_0] [i_0] [7] [0] [i_0]) : 14670006660112513697))) ? (arr_8 [i_0] [i_0] [i_0] [16] [i_0] [i_0]) : var_0))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = ((((arr_10 [i_4] [i_4] [i_4] [i_4] [10]) ? (var_3 / 18446744073709551609) : 14670006660112513712)));

        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_21 ^= (!var_15);
            var_22 = (((arr_1 [i_5]) ? (((~5096) - ((~(arr_19 [1] [1] [12]))))) : (!var_0)));
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_6] [i_6] [i_4] = (arr_9 [i_4] [i_5 + 1] [i_6] [i_7] [i_7]);
                        arr_26 [i_6] = (((((1 ? ((128 ? 1 : 52641461)) : (((var_2 ? (arr_22 [i_4] [i_4] [i_6] [i_7 + 2]) : (arr_22 [5] [5] [i_6] [5]))))))) ? ((77 - (((arr_8 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7]) - var_12)))) : (arr_4 [i_4])));
                    }
                }
            }
            var_23 = ((+(max(967430993, (((arr_22 [i_4] [2] [i_5] [i_4]) ? 731905507 : 26334))))));
        }
        var_24 = (min((((8 ? 65517 : -7731))), (max((arr_5 [i_4] [i_4]), (arr_5 [i_4] [i_4])))));
        var_25 = (((var_2 ? (arr_1 [i_4]) : (arr_1 [i_4]))));
    }
    #pragma endscop
}
