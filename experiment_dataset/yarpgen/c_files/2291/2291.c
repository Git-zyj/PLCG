/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((1 ? ((var_5 ? (arr_1 [i_0] [i_0]) : (arr_0 [1] [1]))) : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [20]) : var_5))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 += (!((((arr_5 [i_1] [i_1]) + (arr_4 [i_1])))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_1] [i_1] &= (((((-((~(arr_5 [i_1] [i_1])))))) ? (1 / var_3) : (arr_6 [i_1] [i_1])));
            arr_9 [i_2] [i_2] = ((arr_6 [i_1] [i_1]) ? (((((min(var_9, -892715930))) || (((var_10 ? (arr_5 [i_1] [i_1]) : 0)))))) : 1);
            var_15 = ((((max(((20167 ? 1 : 1)), ((-117 ? 51340 : var_1))))) ? 8388607 : (max((828869093 / var_8), (min(1, 9223372036854775807))))));
            arr_10 [i_1] [i_2] = ((((max(((max(121159978, (arr_4 [i_2])))), (((arr_0 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_1 [i_1] [i_1])))))) ? (((arr_5 [i_1] [i_1]) ? (max((arr_0 [i_1] [i_1]), -5403558091894223945)) : (((-1 ? 65518 : 1))))) : (((2048 ? (((min(111, var_10)))) : (max((arr_5 [i_1] [i_1]), (arr_4 [i_1]))))))));
            var_16 += var_3;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_17 = (max(var_17, ((((((var_6 ? (arr_5 [i_1] [i_1]) : (arr_13 [i_1] [i_1])))) ? (((1 ? -121159974 : (arr_13 [3] [i_1])))) : (min(var_1, (arr_5 [i_1] [i_1]))))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_18 [i_3] [i_3] [i_3] [i_3] = (((((((-(arr_6 [i_1] [i_1])))) ? (arr_7 [i_4 + 4] [i_4 - 1] [1]) : (!111)))) ? ((((!(~8444249301319680))))) : (min((max(1, var_0)), (6215554787483981918 != var_13))));
                        arr_19 [i_1] [i_3] [i_3] [i_3] = ((((((((1 ? var_11 : var_12))) ? (arr_17 [i_5 - 2] [i_5 - 2]) : ((3 ? var_11 : var_9))))) ? (max((arr_17 [i_1] [i_3]), ((((arr_12 [i_1] [i_3] [i_4 + 2]) < var_11))))) : (min((((arr_15 [i_3] [6]) ? (arr_13 [i_1] [i_4]) : (arr_4 [16]))), 60282))));
                    }
                }
            }
        }
        arr_20 [i_1] = ((-(((!((min(var_0, (arr_14 [i_1])))))))));
        arr_21 [6] = ((-((((max((arr_6 [i_1] [i_1]), var_3))) ? var_6 : (arr_17 [i_1] [i_1])))));
    }
    var_18 = (min(((var_0 ? var_5 : 57389)), (max(var_7, var_9))));
    var_19 &= var_12;
    var_20 = var_12;
    var_21 = (((((min(var_2, var_0)))) ? (max(((1 ? 70368744177152 : var_12)), var_1)) : var_6));
    #pragma endscop
}
