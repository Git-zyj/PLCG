/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 ^= ((~(~var_15)));
    var_20 = (min((max(158, -1)), var_7));
    var_21 = (max(var_9, ((((var_10 + 2147483647) << (var_12 - 9063199913404894535))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((-(var_6 - var_13)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_22 = ((-(arr_0 [i_2 + 3])));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_23 = 17012483870564084907;
                            var_24 = (max(var_24, (((((((arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4]) <= var_0))) >= (arr_8 [i_2 + 3] [i_1] [i_2]))))));
                            var_25 = (min(var_25, (((var_6 | (arr_0 [i_0]))))));
                            var_26 -= (arr_12 [i_0] [i_2 - 1] [i_2] [i_3] [i_0 - 3]);
                            var_27 *= ((-(arr_14 [i_0] [i_1] [i_2] [i_2 - 2] [i_4] [i_1] [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_28 *= (83044660 / var_8);
                            var_29 = (min(var_29, ((((arr_15 [i_0] [i_0 + 1] [i_2] [i_2 - 1] [i_5]) + (arr_10 [i_0] [i_0 - 1] [i_2] [i_2 + 2]))))));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_30 = -var_13;
                            var_31 = (24576 || 54);
                        }
                        arr_19 [i_2] [i_1] [i_0] = ((var_0 ? var_12 : ((1873 ? (arr_1 [i_2]) : var_12))));

                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_32 -= (((arr_14 [i_0] [i_0 - 1] [i_7 + 3] [i_2 + 1] [i_7] [i_0] [i_0]) ? -var_15 : 32746));
                            var_33 = arr_0 [i_0];
                            arr_23 [i_2] [i_3] = ((var_14 <= (arr_21 [i_0] [i_1] [i_2] [i_3] [i_7 - 1] [i_7])));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_3] [i_7] = (arr_4 [i_2]);
                            var_34 = (min(var_34, (((var_17 - ((184 ? 31 : var_6)))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_31 [i_0] [i_2] [i_2] [i_1] [i_9] = ((10851732062858897480 ? ((var_9 << (3643091505659273058 - 3643091505659273050))) : (arr_12 [i_0 - 2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1])));
                            var_35 = (121 > var_17);
                            var_36 = ((var_2 ? var_5 : 1));
                        }
                        var_37 = 2016577476866544510;
                        var_38 = (((-1970171087 + 2147483647) >> (var_3 - 3014094754)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
