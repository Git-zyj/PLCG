/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_17 = (4294967293 ? 19715 : 18373492405477490173);
            var_18 = (max(var_18, ((min((arr_3 [5] [i_1]), ((min((((arr_4 [i_0] [9]) ? var_13 : (arr_4 [i_1] [i_0]))), (((var_0 / (arr_5 [i_0] [i_1]))))))))))));
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_19 = (arr_0 [i_0] [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [6] [i_3] [i_4] = 0;
                        var_20 = (max(2307743554904158176, 1));
                        var_21 = ((((!((max(var_9, 1828962765))))) ? 2307743554904158176 : ((((((arr_12 [i_4]) ? 2575765337 : var_4))) ? ((var_12 ? (arr_3 [i_0] [0]) : 7925)) : 2307743554904158176))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_20 [1] [i_2] [i_2] [i_2] = (max(9961922648976200045, ((max((arr_14 [i_5 + 1] [i_2] [i_5 + 2] [i_5 + 2]), (arr_14 [i_5 + 2] [i_2] [i_5 - 1] [i_5 + 1]))))));
                        var_22 = 2307743554904158165;
                        arr_21 [i_0] [i_2] [4] [i_6] [8] [i_2] = 1;
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_23 = (max((~3030582080), (((((4238024445404077354 ? var_11 : (arr_18 [i_7] [i_7] [i_0] [i_0])))) ? 7538957154908826937 : (arr_10 [i_0] [i_7] [1])))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_24 = (~368356374);
                            arr_35 [i_9] [i_7] [i_7] [i_8] [i_9] [i_10] [i_10] = ((-18486 ? var_5 : ((-(((arr_12 [i_0]) ? var_7 : var_10))))));
                            arr_36 [i_9 - 2] [i_8] [i_9] [i_0] [i_10] = (max(var_13, (arr_14 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1])));
                            arr_37 [i_0] [i_0] [7] [i_0] [i_0] [i_0] [i_9] = 193;
                        }
                    }
                }
            }
        }
        arr_38 [i_0] = ((~(arr_22 [i_0] [i_0])));
        arr_39 [i_0] = ((!(9961922648976200045 > 2307743554904158156)));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    {
                        arr_48 [i_0] [i_11] [i_12] [i_13] [i_13] [i_12] = (arr_24 [i_13] [i_11] [i_0]);
                        var_25 = (max((!2307743554904158176), (arr_28 [i_0])));
                        var_26 = max(var_2, var_3);
                    }
                }
            }
        }
    }
    var_27 = ((-(2307743554904158155 % 16139000518805393448)));
    var_28 = var_13;
    var_29 = (((max((max(var_9, var_13)), (((var_8 ? var_12 : var_6)))))) ? var_5 : 8484821424733351583);
    #pragma endscop
}
