/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (!16490416129646921338);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                arr_7 [i_0] [i_2] = -1163046114;
                arr_8 [i_0] [i_2] |= (!793007503);
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_17 = (max(var_17, (3501959793 >= 3501959793)));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_18 = ((((var_11 ? 793007528 : var_3)) >= 5396210119349566043));
                    var_19 = (min(var_19, ((((arr_1 [i_0 + 1] [i_0 + 1]) >= var_10)))));
                    var_20 = 0;
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_21 = (max(var_21, ((((arr_9 [i_0 - 1]) & -42)))));
                    var_22 = (max(var_22, var_15));
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_23 ^= ((var_11 ? 3597896632 : (var_14 >= var_3)));
                            arr_25 [i_7] [i_7] [i_7] [i_8] [i_7] [i_7] [i_7] = ((((((arr_23 [i_8] [i_1] [i_6] [6] [9]) ? (arr_3 [i_0] [i_0]) : 64819))) ? 2552189272 : ((var_14 ? var_4 : var_3))));
                        }
                    }
                }
            }

            for (int i_9 = 2; i_9 < 7;i_9 += 1)
            {
                var_24 = (((var_3 ? 13050533954359985572 : var_5)));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 8;i_11 += 1)
                    {
                        {
                            arr_33 [i_11] [i_10] [i_9] [i_1] [i_11] = ((((13050533954359985572 ? 697070673 : 0)) >= (~-14)));
                            arr_34 [i_11] [i_11] = 64819;
                            var_25 = (arr_23 [i_11] [i_11] [i_9] [i_11] [i_11]);
                            var_26 = (((arr_30 [i_1] [i_9] [i_9 - 2]) >= 697070663));
                        }
                    }
                }
                var_27 = (((((arr_24 [i_1]) ^ (arr_24 [i_0]))) >> (((arr_16 [1] [i_9 + 3] [i_9] [i_9] [i_9] [i_9]) - 55147))));
                arr_35 [i_0] [i_0 - 2] [i_1] [9] = 9007199254740992;
                var_28 = 3170441643544284421;
            }
            var_29 = (4 ? 197 : 1);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_30 = var_2;
            arr_38 [i_12] = (((arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 2]) >= (arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])));
        }
    }
    var_31 = ((var_13 >= (((172 >= (min(697070655, var_6)))))));
    var_32 = ((var_4 >= (max((0 >= 13642268096062903556), var_13))));
    var_33 = 3597896632;
    var_34 = var_8;
    #pragma endscop
}
