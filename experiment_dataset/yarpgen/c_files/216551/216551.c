/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((16 ? ((min(14, 191))) : ((6715 ? -6716 : 101))))) ? var_11 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_15 = ((155 ? 83 : 6735));
                    var_16 = (((arr_7 [i_1] [i_1] [i_2 + 1] [i_2 - 1]) ? (arr_9 [i_0] [i_0] [i_2 - 1] [i_2 - 2]) : var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [1] [i_2 + 1] [i_3] = (((((-6715 ? 141 : 101))) ? (arr_4 [i_1] [i_2 + 1]) : (arr_13 [i_4 + 1] [i_4 - 2] [i_4] [i_4] [i_4 - 1])));
                                var_17 = ((var_13 ? ((var_1 ? 172 : 117)) : (((arr_10 [5] [i_1] [5] [5]) ? 14704 : 19423))));
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_5] = (((((var_4 ? (arr_12 [i_5] [i_5 - 2] [i_5] [i_5] [i_5 - 3] [i_5]) : (arr_3 [i_5 - 3] [i_5 + 1] [i_0])))) ? (min(((255 ? (arr_0 [i_1] [i_5]) : 172)), (((arr_17 [i_1]) ? (arr_6 [i_0] [0] [9]) : (arr_0 [i_5] [i_5 + 1]))))) : ((var_13 ? ((138 ? var_0 : (arr_16 [i_0]))) : (((arr_6 [i_0] [i_0] [i_5 - 1]) ? 101 : var_6))))));
                    var_18 = ((((min(0, 139))) ? (max((((arr_15 [i_0]) ? var_2 : 101)), ((var_12 ? var_8 : 107)))) : (((((var_3 ? 1 : var_0))) ? (((arr_6 [i_0] [i_1] [9]) ? 178 : (arr_9 [i_5] [i_1] [9] [i_0]))) : (((arr_7 [i_0] [i_1] [i_0] [i_0]) ? 130 : (arr_10 [i_0] [i_1] [i_1] [i_5])))))));
                    arr_19 [i_5] [i_1] = (max((((((172 ? (arr_4 [i_0] [i_0]) : var_0))) ? (((arr_2 [i_1]) ? (arr_5 [i_0] [i_0]) : var_5)) : (arr_9 [i_5 - 3] [i_5] [i_5 - 1] [i_5 - 1]))), ((var_10 ? ((min(66, (arr_10 [i_0] [i_0] [i_1] [i_5])))) : ((123 ? 31898 : 15308))))));
                }
                var_19 = (min(var_19, ((max(((var_11 ? (arr_9 [i_1] [i_1] [i_0] [i_0]) : 2980)), (((arr_9 [i_0] [i_0] [i_0] [i_1]) ? (arr_9 [i_0] [i_0] [i_1] [i_0]) : 138)))))));
            }
        }
    }
    var_20 = ((((max(((var_6 ? var_3 : var_2)), ((max(117, 115)))))) ? var_10 : ((var_8 ? ((max(var_11, var_8))) : ((var_9 ? var_9 : var_9))))));
    #pragma endscop
}
