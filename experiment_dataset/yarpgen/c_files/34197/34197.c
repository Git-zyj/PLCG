/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(((((((arr_4 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_5 [i_0] [8] [i_0])))) ? ((294974615 ? 1543090681 : var_4)) : ((min(var_6, (arr_1 [i_0])))))), (((var_3 ? (arr_1 [i_0]) : var_1)))));
                var_14 = (((var_4 ? (((-25183 ? -95 : var_2))) : (min((arr_5 [i_1] [i_0] [3]), 12)))));
            }
        }
    }
    var_15 = ((((var_6 ? var_6 : var_4))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_17 [i_3] [i_4] = (294974631 ? -32762 : -1465698689);
                    var_16 = ((((((((28893 ? (arr_9 [i_2]) : 33168))) ? ((min((arr_0 [0]), var_6))) : (min(var_11, (arr_11 [i_4] [0] [i_4])))))) ? (((((3999992687 ? var_9 : (arr_9 [6])))) ? var_2 : (min((arr_0 [12]), (arr_5 [i_3] [2] [i_3]))))) : ((min(((var_8 ? (arr_2 [i_2] [i_2] [i_4]) : 31)), ((var_6 ? (arr_7 [i_4]) : var_1)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((max(((120 ? (min(1935543461, (arr_11 [i_5] [i_3] [i_4]))) : (((var_6 ? 20079 : (arr_18 [i_4] [i_4] [i_3 + 3] [i_2])))))), 65078)))));
                                var_18 = (min(((var_2 ? ((max(var_7, 41653))) : ((-91405621 ? 3999992684 : 458)))), (max((((arr_12 [i_5]) ? var_6 : 2359423837)), var_0))));
                                arr_22 [i_2] [i_3] [i_4] [i_3] [i_6] [i_2] = (((14892 ? 25213 : 3876673127)));
                                arr_23 [i_6] [i_3] [i_2] [i_3] [i_2] = (((((((max((arr_13 [i_4] [i_5] [i_6]), (arr_9 [i_2])))) ? (((arr_10 [i_4]) ? var_2 : var_3)) : (((19797 ? 30 : 65078)))))) ? ((3932160 ? 37450 : 4294967295)) : ((max((max(41646, -91405630)), (max(var_13, var_0)))))));
                            }
                        }
                    }
                    var_19 = (max((((min(65078, 96)))), ((((((arr_0 [0]) ? (arr_11 [i_2] [16] [i_2]) : 5576788611307766021))) ? (((113 ? var_11 : var_7))) : (((arr_13 [i_4] [i_3] [i_2]) ? 160 : (arr_8 [i_2] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
