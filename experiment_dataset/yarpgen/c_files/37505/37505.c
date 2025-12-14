/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -126;
    var_14 = (max(var_14, ((((((-12 ? 125 : 125) & ((min(var_7, 125))))))))));
    var_15 |= ((((((-126 >= var_4) ? var_5 : ((var_0 ? var_9 : var_10))))) ? (((var_6 & var_12) ? (var_3 == -67) : ((min(var_4, 122))))) : (((~-115) ? (~103) : ((max(-10, 125)))))));
    var_16 = (min(var_16, (((((((~var_10) ? var_7 : var_12))) ? var_11 : 18)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((~((min(-107, 84))))) >= (arr_0 [i_0])));
        var_17 = ((((max((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_12)), (arr_1 [5])))) ? (((((var_10 - (arr_0 [i_0])))) ? var_9 : (((arr_0 [i_0]) - var_11)))) : (arr_1 [2])));

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 = (max(var_8, -67));
                        var_19 = (arr_9 [2] [2] [i_2] [i_2] [11]);
                        var_20 = (min(var_20, (((!(arr_4 [16] [16]))))));
                        var_21 |= ((127 ? ((((max(var_8, 92))) ? var_12 : 35)) : var_7));
                    }
                }
            }
            arr_11 [i_0] [i_1] = ((((((!(arr_0 [i_0]))))) ? (((arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? ((64 ? (arr_5 [i_0]) : var_0)) : ((((arr_4 [i_0] [i_1]) >= (arr_8 [i_0])))))) : (max((arr_8 [i_1 - 4]), ((var_7 & (arr_0 [10])))))));
        }
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            var_22 = (min(var_22, (((!(arr_10 [i_0] [7]))))));
            var_23 = (max(var_23, (((var_6 ? (max((arr_10 [i_0] [i_0]), (((arr_12 [i_0] [i_4 + 1]) ? var_2 : 11)))) : var_6)))));
            var_24 = (79 >= 56);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_25 |= ((-(arr_8 [i_5])));
            var_26 = (arr_12 [i_0] [i_5]);
        }
        arr_18 [i_0] = (((arr_3 [15] [i_0]) * ((~(arr_3 [i_0] [i_0])))));
    }
    #pragma endscop
}
