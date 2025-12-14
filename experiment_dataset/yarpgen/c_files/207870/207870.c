/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max((max(var_10, -6190456396135403693)), (6190456396135403693 + -6190456396135403692)))) ? 6190456396135403692 : var_7));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(var_20, (((((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))) ? (((max((arr_2 [i_0]), var_15)))) : (((arr_1 [i_0]) ? 2775366964 : (arr_0 [i_0] [2]))))) | ((((((((-6190456396135403711 + 9223372036854775807) >> (-3159392762435533678 + 3159392762435533741)))) || 47714)))))))));
        var_21 = (max((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : 17290561534763790573))));
        arr_3 [i_0] = ((((!(((4294705152 + (arr_1 [i_0])))))) ? (~var_16) : 1064349215));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_3] = ((((arr_8 [10] [18] [i_4]) ? var_2 : (arr_10 [i_3] [i_1 - 1] [i_3]))));
                        var_22 = 6190456396135403691;
                        var_23 = (!14);
                        var_24 = (max(var_24, ((((1608856252 == var_0) || var_8)))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_25 = (((36 ? 6190456396135403692 : (arr_8 [14] [i_2 - 1] [15]))));
                        var_26 -= (~var_18);
                    }
                    arr_16 [i_1 - 1] = (((arr_7 [i_1 - 1] [i_1 + 1]) / (((arr_15 [i_1] [i_3] [i_3] [i_3] [i_1 - 1] [i_3]) ? 55975 : 1156182538945761042))));
                    arr_17 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] = (((var_6 || var_8) & ((1 ? (arr_8 [i_1 + 1] [i_2] [i_1 + 1]) : var_12))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_27 *= ((6190456396135403710 ? -6190456396135403692 : -44));
                                var_28 = ((1 >> (var_12 - 130)));
                            }
                        }
                    }
                }
            }
        }
        var_29 = (!var_17);
    }
    #pragma endscop
}
