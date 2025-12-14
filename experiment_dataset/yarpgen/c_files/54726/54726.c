/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_16 = ((~1) && -6372825721880621789);
                            var_17 = (-372403839 - -1948837410);
                            arr_13 [i_1] = (arr_11 [i_0] [i_0] [i_2 - 1] [i_0] [6] [i_1 + 1] [2]);
                        }
                    }
                }
            }
            var_18 = (max((!473254223), (((arr_8 [i_1 + 1]) ? 673660561 : ((var_13 ? var_11 : var_10))))));
        }
        arr_14 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_25 [3] [i_7] [i_6] [3] [5] [i_0] [i_0] = (252 - -1381276211);
                                var_19 = -1381276211;
                            }
                        }
                    }
                    var_20 = ((((max(140, (arr_21 [2] [13] [i_6] [i_6] [i_5 - 1])))) + (5241 - 43034)));
                    var_21 = (min((max(372403839, 5435748652932513344)), (((!(arr_24 [i_0] [i_0] [1] [i_5] [i_5 + 1]))))));
                }
            }
        }
        var_22 ^= (((!-26) ? (!-5435748652932513350) : (((arr_11 [1] [i_0] [i_0] [1] [i_0] [1] [i_0]) / 197))));

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_23 = ((~((var_2 / (arr_8 [i_9])))));
            var_24 &= var_9;
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_25 &= (((max(-47, (arr_0 [i_0])))));
            var_26 = ((min((arr_21 [i_0] [3] [i_0] [i_0] [i_0]), (arr_29 [i_0] [i_10]))));
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 4; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            {
                var_27 = (max(var_27, ((-(!-26)))));
                var_28 = ((((33534 ? (arr_36 [i_11 + 2]) : (arr_36 [i_11 - 1]))) / (~116)));
                var_29 = 1381276194;
            }
        }
    }
    var_30 = (max(var_30, (1 << 0)));
    #pragma endscop
}
