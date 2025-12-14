/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_10 = (((arr_3 [i_1]) ? 31300 : (arr_3 [i_1 - 2])));
            var_11 = (arr_5 [i_0]);
            arr_6 [8] [8] [i_0] = (((29 && 22) ? (arr_1 [i_1 - 1] [i_1 - 2]) : 4282));
            var_12 = (arr_4 [i_0] [15]);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_13 += var_9;
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        var_14 = (min(var_14, (((((-(arr_11 [i_0] [i_2] [i_2]))) == (~3900))))));
                        var_15 = (arr_5 [i_2]);
                    }
                }
            }
            var_16 = (min(((((max(var_9, (arr_13 [i_0] [i_2] [i_0] [i_0] [i_0])))) < (-32754 && 31297))), ((((min(-21, 31299))) > (((!(arr_1 [i_2] [i_2]))))))));

            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                var_17 = (max((arr_14 [5] [i_2] [i_2] [i_5] [20] [i_0]), (arr_7 [i_0])));
                var_18 ^= (arr_16 [i_0] [i_5 - 2] [i_5] [i_5 - 3]);
                var_19 = (min((((arr_16 [i_0] [i_2] [i_5 - 1] [i_5 - 2]) + (arr_10 [i_5 - 1] [i_5]))), ((var_7 ? var_8 : var_5))));
            }
        }

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_20 [4] [i_0] = (max((((arr_3 [i_6]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_6]))), ((min((arr_1 [i_0] [i_6]), (arr_0 [i_0] [i_6]))))));
            arr_21 [i_0] = ((!(arr_5 [i_0])));
            var_20 |= (arr_4 [19] [i_6]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_27 [i_0] = (((((((max((arr_15 [6] [i_6] [i_6] [i_0]), (arr_18 [i_0] [14] [i_7])))) > (!4195)))) < (arr_1 [i_0] [i_8 - 4])));
                        arr_28 [i_0] [4] [i_7] [i_8] [i_0] = (max(((((min((arr_16 [i_0] [i_6] [i_7] [i_7]), (arr_8 [i_0])))) ? var_1 : ((min((arr_5 [i_0]), (arr_1 [i_0] [21])))))), 32753));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_21 = (arr_12 [i_8 - 3]);
                            var_22 = (max(var_22, (((!(arr_23 [i_0] [8] [i_7]))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
