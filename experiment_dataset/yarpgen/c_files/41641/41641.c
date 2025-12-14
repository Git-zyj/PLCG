/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_11 = (~1);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_12 = (arr_11 [i_0] [i_1] [i_3]);
                            var_13 = ((-(var_8 ^ var_0)));
                            var_14 = (((arr_0 [i_4]) * ((7096667826021251660 ? 4238739756 : (arr_9 [i_3] [i_2] [i_1] [i_0])))));
                            arr_14 [i_3] [i_3] [i_2] [i_2] [i_2] = var_2;
                            var_15 |= 1;
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {

                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [2] [i_1] [i_6 + 1] |= (((var_0 - var_2) ? (var_9 || 9018016742677217803) : ((2824064992 ? 12 : -5430793586930608815))));
                        arr_23 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] [1] &= 1148343649;
                        var_16 = var_0;
                        var_17 = (arr_10 [i_6]);
                        arr_24 [i_6] [i_2] [i_6] [i_2] [i_6] [i_1] [i_0] = ((~(((arr_5 [i_0] [i_0] [i_0] [4]) ? var_8 : 11368))));
                    }
                    var_18 = (arr_12 [i_0] [i_1] [i_1] [i_2] [i_5]);
                    var_19 = var_5;
                }
            }
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                arr_28 [i_0] [i_7] [i_7] = ((~(arr_17 [i_7 - 3] [i_7] [i_0] [i_0])));
                var_20 ^= ((arr_25 [i_0] [i_1] [i_7 + 2] [i_7 - 3]) ? (arr_1 [i_7 - 2]) : 4294967295);
                var_21 = (min(var_21, (arr_15 [1] [i_1] [i_1] [i_1] [i_1] [i_0])));
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_31 [i_8] [i_8] [12] = (((var_1 ? (arr_12 [i_0] [i_0] [i_8] [i_8] [i_0]) : (max(1148343672, (arr_19 [i_8]))))));
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_22 += (~-1027034689);

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            var_23 = ((((var_7 >> (var_1 - 808059737)))) ? (~1148343654) : 1027034668);
                            var_24 = 66625974;
                            var_25 = var_2;
                        }
                        var_26 += max((min((arr_13 [i_8] [i_8] [i_8] [8] [i_9 - 1] [i_8] [i_10]), 3146623647)), var_4);
                        var_27 = max((~var_8), -1);
                        var_28 = ((min(((-2127573509 ? 3146623617 : 3146623608)), ((max(1, 10072))))));
                    }
                }
            }
            var_29 = ((((1148343629 ? ((-6693524383778912454 ? 536722009417707178 : 1148343672)) : var_4)) > ((max(((1 ? var_9 : -38)), 1)))));
        }
        arr_40 [i_0] = (((var_9 / (arr_9 [i_0] [i_0] [i_0] [i_0]))));
        arr_41 [i_0] = ((~-103) ? ((max((1 && 3146623604), 22845))) : ((((arr_38 [i_0] [i_0]) <= (min(127, 3146623647))))));
        arr_42 [i_0] [i_0] = (((arr_19 [i_0]) ^ ((min(var_8, 384747914)))));
    }
    var_30 ^= (((-(min(var_7, 0)))));
    var_31 = (max((var_4 == -38), var_7));
    #pragma endscop
}
