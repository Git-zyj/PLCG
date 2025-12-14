/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (arr_2 [i_0] [i_0] [i_0]);
                var_12 = ((!((-6821 == (max(var_0, var_3))))));
                var_13 = (arr_2 [i_0] [i_0] [i_1]);
                var_14 ^= (var_9 != 129);

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_15 = var_2;
                    var_16 = (max(var_16, var_3));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_3] [i_3] [i_2] [i_1] [i_0] = (arr_3 [14] [i_2 - 1] [i_3]);
                        var_17 = var_7;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] [10] = (~1259664080);
                            arr_15 [i_2] [9] [9] = ((var_5 ? ((((!var_7) > (arr_6 [i_1])))) : (!-3556804244)));
                        }
                    }
                    var_18 = var_2;
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_19 [i_0] = (((arr_3 [i_0] [i_1] [i_5]) ? (~0) : (((((arr_3 [i_0] [i_1] [i_5]) == var_9))))));

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_0] [i_6] [i_6] = (arr_12 [i_0] [i_6 + 1] [i_5] [i_6] [i_7 - 1]);
                            arr_26 [i_7] [i_6] [i_5] [i_1] [i_0] = (~var_9);
                            var_19 = ((-7011 ? var_3 : var_8));
                            arr_27 [i_7 - 2] [i_0] [i_0] [i_0] [i_0] = (4294443008 / -31);
                        }
                        for (int i_8 = 4; i_8 < 12;i_8 += 1)
                        {
                            var_20 = ((~(min(-84, 738163082))));
                            arr_31 [i_0] [i_5] [i_8] = var_3;
                        }
                        arr_32 [3] [0] [3] [3] = ((-(-32767 - 1)));
                    }
                }
            }
        }
    }
    var_21 = (max(var_2, var_2));
    #pragma endscop
}
