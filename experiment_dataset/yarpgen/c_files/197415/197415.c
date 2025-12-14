/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_6, var_1));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 &= (arr_2 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] [6] [0] |= ((~(((!(arr_0 [i_1]))))));
            arr_7 [i_0] [i_1] = 40037;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_0] [6] = (max((min((arr_0 [i_0]), var_9)), -105));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_19 [i_0] = var_11;
                            var_17 = (25485 ? ((var_9 ? (arr_9 [i_4 + 2] [i_4 + 2]) : ((max(60, 105))))) : (min(((var_13 ? 105 : 25490)), (arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                            arr_20 [i_4] [i_0] [i_0] [12] = ((-(min(25485, ((105 ? var_3 : var_1))))));
                            var_18 = (min(var_18, ((((min((max(var_4, var_9)), var_3)) * ((var_12 ? var_9 : (var_8 * 4245816832))))))));
                            var_19 -= -22;
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] = (((arr_12 [i_0] [12] [i_3] [i_0 + 1]) ? var_14 : (((arr_14 [i_0 - 1] [i_2] [0] [i_4 - 2] [i_6] [i_0]) ? 1 : -113))));
                            arr_24 [i_2] [i_0] [i_2] [i_2] [i_2] = var_4;
                            var_20 = ((-(arr_16 [i_0] [i_4 + 2] [i_3 + 1])));
                        }
                        var_21 = (min(var_21, var_7));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_22 = (max(((((var_4 ? 3600014266999790395 : (arr_30 [i_0] [i_9] [i_10]))))), ((~(~var_10)))));
                            var_23 = ((((max(102, 3139542160))) ? (!var_14) : (((arr_5 [i_10 - 2]) ? var_10 : var_3))));
                        }
                    }
                }
            }
            arr_38 [i_0] [i_7] = ((((max((arr_28 [i_0]), (arr_28 [i_0])))) * var_7));

            /* vectorizable */
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    var_24 += (~8);
                    arr_44 [i_0] = (arr_17 [i_0] [i_7] [i_0 - 1]);
                    var_25 = var_0;
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    var_26 &= ((~(arr_16 [i_7] [i_7] [i_11 + 2])));
                    arr_47 [i_0] [i_7] = (~(arr_35 [i_11 + 2] [i_11] [i_11 + 2] [i_0] [i_13] [i_11]));
                    var_27 += ((7825086751212890669 ? 27 : 40066));
                    var_28 = (max(var_28, 32950));
                }
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    arr_52 [i_0] [i_0] [i_11] [i_14] [i_11] [i_14] = -194843446771615527;
                    var_29 *= ((var_7 ? 26 : var_6));
                    arr_53 [i_11] [i_0] [i_0] [i_0] = 33;
                }
                arr_54 [i_0] [i_7] = ((4540794057528110260 ? var_9 : (arr_11 [i_0] [i_11 + 2] [i_11 + 1] [i_0])));
                var_30 = -105;
            }
            arr_55 [i_0] [i_0] = ((16380 ? 40037 : 7));
        }
        arr_56 [i_0] = ((((((~var_7) ? (((min(1, 17)))) : 133))) ? ((-(arr_1 [i_0] [i_0 + 1]))) : var_1));
        arr_57 [i_0] = (((arr_1 [i_0] [i_0]) ? 56779205 : ((-97 ? (arr_35 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1]) : (arr_35 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0])))));
    }
    #pragma endscop
}
