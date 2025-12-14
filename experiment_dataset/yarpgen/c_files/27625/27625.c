/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 ? ((-87 ? ((var_9 ? var_1 : var_1)) : 240708843)) : 1065353216));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = (arr_0 [9]);
        var_15 = max(-100, (min(0, 88)));
        var_16 = 168;
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1 + 2] = (~var_4);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [4] [i_2] = (arr_4 [i_2] [i_1]);
            var_17 = 1;
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_18 = 49463;
                            var_19 = (min(var_19, -1));
                            var_20 += -117;
                        }
                    }
                }
            }
            var_21 = ((((!(!var_7)))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    {
                        var_22 = (max(((+((var_8 ? (arr_15 [i_1]) : var_4)))), (((((1 ? var_4 : (arr_19 [i_1 + 1] [0] [i_6] [i_8] [6])))) ? -5 : (((arr_24 [6] [i_6]) ? (arr_7 [i_1] [6]) : 101))))));

                        for (int i_9 = 4; i_9 < 12;i_9 += 1)
                        {
                            var_23 = (max(var_23, ((((arr_18 [i_9 + 1] [i_8 + 1] [i_8 + 1] [i_7 + 4] [i_1 - 1]) ? (min((arr_0 [i_1 - 2]), (arr_0 [i_1 - 2]))) : (((-(arr_16 [i_9 + 2] [i_9 - 4] [i_9 - 1] [i_9 + 1] [3] [i_9 - 3])))))))));
                            var_24 = (max(var_24, ((max(var_6, (max(100, ((min(1, -86))))))))));
                            var_25 = 1;
                        }
                        arr_30 [5] [8] [2] [8] [4] [i_6] = 373030427;
                    }
                }
            }
            var_26 |= (arr_18 [3] [i_6] [1] [1] [7]);
            arr_31 [13] [i_6] [i_1 - 4] = (((max(1, 1))));
        }
        arr_32 [i_1] = ((!((max(var_11, (arr_25 [i_1] [i_1]))))));
        var_27 = (min(var_27, 4294967295));
    }
    #pragma endscop
}
