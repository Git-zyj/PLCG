/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((~2160415523) ? var_9 : var_3)), (((115 ? var_6 : var_7)))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_12 = (((max(62777, 1973148595)) / var_0));
            var_13 ^= ((arr_4 [i_0] [i_0]) ? ((max((arr_1 [i_0 - 3] [i_0 - 3]), (arr_5 [i_0])))) : (min(var_9, var_4)));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_14 ^= (min((max(var_0, (var_1 - 40478447))), var_10));
            arr_9 [i_2] [i_0] [i_0] = ((-var_3 ? ((max(((-(arr_7 [i_2] [i_0]))), ((((arr_4 [i_0] [i_0]) <= (arr_3 [8]))))))) : (min(-var_4, var_10))));
            arr_10 [i_0 - 1] [i_0 - 3] [i_0] = (((((((max((arr_1 [i_0] [i_0]), (arr_4 [11] [i_2]))) < ((((arr_7 [i_0] [i_0]) >= var_3))))))) == (min((2758 < var_4), var_1))));
            var_15 = (min(var_15, (3584 - 2766)));
        }
        var_16 = (min(11, -10260));
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {
                    arr_21 [i_5] [i_5] = (((max(((((arr_16 [i_3] [i_4]) ? 0 : (arr_11 [i_3])))), (((((arr_19 [i_3] [i_3] [i_5] [i_3]) + 9223372036854775807)) << (((arr_15 [i_3] [i_5]) - 695024279)))))) & var_7));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_17 = 262128;
                                var_18 = (max(((((arr_20 [i_5] [i_5 - 1] [i_5] [i_5 + 1]) | (arr_20 [i_5] [i_5 + 2] [i_5 + 2] [i_5])))), var_2));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (max((arr_16 [i_3] [i_3]), (max(2780, 260244833))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_37 [i_8] [i_8] [i_8] [i_9] = max(((var_9 ? ((10246 ? 8860365491102542087 : 2758)) : var_9)), ((max((arr_34 [i_9] [i_9] [i_9] [i_9]), (max(var_5, (arr_30 [i_9])))))));
                        var_20 = (((((10260 ^ (var_10 * 21387)))) + (max(8363938098690990495, 9))));
                        var_21 = (max(((62773 ? (arr_36 [i_10 + 1] [i_10 + 1] [i_10 - 2] [i_10 - 2] [i_10 + 1] [i_10]) : 108681551288885199)), (max(((6865921976256234578 ? var_2 : (arr_33 [i_9] [i_9] [i_11]))), ((max((arr_29 [14]), 27885)))))));
                        var_22 = (max(var_22, ((max(var_2, (((arr_33 [i_9] [i_10 - 1] [i_10 + 1]) ? 38 : (arr_33 [i_9] [i_10 - 1] [i_10 + 1]))))))));
                        arr_38 [i_9] [i_9] = 2147483647;
                    }
                    var_23 = (arr_36 [i_8] [4] [i_8] [i_8] [i_8] [i_8]);
                }
            }
        }
    }
    #pragma endscop
}
