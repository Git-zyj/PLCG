/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((91 & (var_4 && var_14))) * 127)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~-7620);
        arr_3 [i_0 - 1] [i_0] = (((arr_1 [i_0 + 1] [i_0 - 2]) ? (arr_1 [i_0 - 2] [i_0 - 1]) : (((2147483647 ^ (-127 - 1))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_16 ^= -107;
            arr_6 [4] [i_1] |= ((-(arr_0 [i_0])));
            arr_7 [i_0] [i_0] = 30138;
            var_17 = (!var_4);

            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {

                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = 11643404323393537176;
                        var_19 += ((70 ? 241 : -1140569302));
                    }
                    var_20 = 6;
                    var_21 = (arr_9 [i_0] [i_1]);
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((((arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) ? (-127 - 1) : (arr_18 [i_0] [i_1]))) * (((arr_10 [i_5] [9]) / 255)))))));
                            var_23 = ((((4018527611173629665 ? 44 : (arr_14 [i_0] [3] [i_0] [i_2] [1] [i_6])))) ? (arr_5 [i_2 - 1] [9] [i_0 - 1]) : 72057044282114048);
                        }
                    }
                }
                var_24 = (~7484449297310380407);
            }
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            arr_24 [i_0 - 1] [i_0] = -3807444319;
            var_25 ^= ((!(arr_22 [i_0 + 1] [i_0] [i_7])));
            arr_25 [0] [4] |= ((~(arr_1 [i_0] [15])));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {

            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_26 = (max(var_26, (~var_8)));
                            var_27 = -3443990402995601296;
                            var_28 = 229;
                            var_29 = (((((var_2 << (30596 - 30572)))) ? ((234 ? 9223372036854775807 : -113)) : (arr_33 [i_9] [i_0 - 2] [i_9 + 2] [i_9] [i_11 + 1])));
                            var_30 = 2147483647;
                        }
                    }
                }
                var_31 &= (var_12 || (arr_17 [i_9] [8] [i_0 - 2] [i_9 + 2] [i_9 - 2]));
                var_32 = (max(var_32, ((((!17163) && (!var_0))))));
            }
            var_33 = 2147483647;
        }
        var_34 = (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_35 = (12 ? (arr_16 [16] [i_0 + 1] [i_0 - 2] [i_0]) : (arr_16 [i_0] [i_0 - 2] [i_0] [i_0]));
    }
    #pragma endscop
}
