/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, ((((((-(arr_1 [i_3])))) ? (((arr_4 [10] [i_1]) ? ((48 ? var_8 : 8)) : ((((arr_5 [i_0] [3] [i_4]) / 254))))) : (((((254 ? (arr_3 [6]) : (arr_3 [i_2])))) ? (((7236630854728035508 ? 60 : 9))) : (0 / 6904618209744368574))))))));
                                var_12 = (min(var_12, ((max((((((arr_3 [i_0]) && (arr_15 [i_0] [i_0] [4] [i_0] [i_0] [i_0] [i_0]))) ? (arr_1 [i_2]) : 1594430422)), 254)))));
                            }
                        }
                    }
                }
                var_13 = ((((((arr_4 [i_0] [i_1]) / (arr_4 [i_0] [i_1])))) && (arr_15 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_14 = (max(-3566558240131980649, ((max(1, (9006 != 2))))));
                            var_15 = (min(((((((1612015836 > (arr_15 [i_0] [i_1] [i_5] [i_5] [i_6] [9] [5])))) % (((arr_15 [i_6] [i_6 + 1] [i_5] [i_1] [i_0] [i_0] [i_0]) * 255))))), (((min(var_9, var_0)) - var_7))));
                            var_16 = ((((((8696550457646970942 || (arr_1 [i_6]))))) || ((max(46, 0)))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((var_2 % 1612015836) - (var_4 && 28904))) * ((((((0 ? var_6 : var_8)) != 3))))));
    #pragma endscop
}
