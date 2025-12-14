/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = 9;
        var_20 = ((var_0 ? -var_3 : (max((var_0 < 4191), ((-126 ? 1274897285 : 422773010))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_10 [i_1] [13] [13] [13] &= var_6;

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [12] [12] [i_1] [i_1] [i_1] [i_1] = (-((-(max(246723858, var_9)))));
                        arr_15 [i_1] [i_2] [i_1] [i_4] = (~var_0);

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_21 = var_2;
                            var_22 = var_10;
                            var_23 = (min(var_23, var_12));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [1] [i_2] [i_2] &= (((-1 ? -1 : ((max(255, var_9))))));
                            var_24 = (--1);
                        }
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            var_25 = (~1515374900814475449);
                            arr_25 [i_1] [i_2] [i_3] [i_4] [i_4 - 1] [i_4] [i_7] = ((25151 ? var_13 : 250));
                            var_26 ^= ((-(~var_10)));
                            arr_26 [i_1] [i_1] [i_1] [i_7] [i_7] = 1274897285;
                            var_27 = ((-5063251378331737540 ? var_0 : 15979));
                        }
                    }
                    var_28 |= (~var_15);
                    var_29 = ((-((var_11 ? 3020070011 : 197))));
                }
            }
        }
    }
    #pragma endscop
}
