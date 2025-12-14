/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 = ((((((arr_0 [i_2] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3]) : 40))) || 13875542919523671153));

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            arr_14 [i_1] [i_2] = ((!(((var_6 ? (arr_13 [i_0] [i_0] [i_0] [i_2 + 1] [i_3] [i_4]) : (arr_1 [i_3]))))));
                            var_14 = (arr_4 [i_0]);
                        }
                        arr_15 [i_0] [1] [i_2] [i_0] [i_0] = (!var_11);

                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_15 = (arr_13 [i_2] [i_2 + 3] [i_2] [i_2 + 2] [i_2 + 3] [i_1 + 2]);
                            arr_20 [i_5] [i_3] [i_2] [i_1] [2] = ((781463858646225907 ? 4571201154185880462 : (arr_3 [i_1 - 2] [i_1])));
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_3] [i_5] [1] = (((arr_12 [i_0] [i_1] [i_2 + 3] [i_2] [i_5] [i_0] [i_1 - 3]) && (arr_6 [i_3] [9] [i_0])));
                            var_16 = (min(var_16, (((var_4 / (arr_9 [i_1 - 1] [i_2 + 3] [i_5 + 2]))))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_17 &= ((var_4 ? (arr_23 [i_2 - 1] [i_1 - 3] [i_2] [i_2 - 1] [i_2 - 1] [i_3]) : ((((var_5 > (arr_22 [i_1] [i_0] [i_1 + 1] [i_1] [i_1] [i_6] [i_6])))))));
                            var_18 = (arr_22 [i_2] [i_1 + 2] [i_1 - 1] [1] [i_2 + 2] [i_2] [i_2 + 1]);
                        }
                    }
                }
            }
        }
        arr_26 [i_0] = (!22);
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = (((((var_6 * ((1068632438 << (-60 + 91)))))) ? ((((arr_1 [i_7]) < (arr_10 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [8] [i_7])));
        arr_30 [i_7] = (arr_10 [i_7] [i_7] [i_7] [i_7] [1] [i_7]);
    }
    var_19 = (var_8 ^ 12433897821642924966);
    #pragma endscop
}
