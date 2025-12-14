/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((var_0 ? ((17160532063495546393 ? var_4 : 1495992581)) : (((-(arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 *= ((((((var_7 ? var_12 : (arr_11 [i_0] [i_1] [i_2] [i_0] [19])))) ? ((var_13 ? var_5 : (arr_2 [i_3] [i_2] [i_1]))) : (~1286212010214005229))));
                                var_16 = (max((((((var_1 ? (arr_5 [i_0] [i_3] [i_1] [i_0]) : (arr_6 [i_0] [i_1] [i_0] [i_0])))) ? (((2715485389 ? 1579481902 : -1))) : var_0)), (arr_9 [9] [i_0])));
                                var_17 &= ((+(min((arr_9 [i_4] [i_0]), (((arr_8 [i_0] [i_0] [i_2]) << (((var_6 + 7807123111800216209) - 17))))))));
                            }
                        }
                    }
                }
                var_18 = (max(var_18, (((((((arr_1 [i_0 + 4]) ? (arr_1 [i_0 + 4]) : (arr_1 [i_0 + 4])))) ? ((max((arr_1 [i_0 + 4]), var_12))) : (((arr_1 [i_0 + 4]) ? var_10 : (arr_1 [i_0 + 4]))))))));
                arr_12 [i_0 + 4] [i_0] = ((((((max(var_2, (arr_11 [i_0] [1] [i_0] [1] [11]))) << (((((arr_0 [i_1] [i_0]) ? (arr_7 [i_0] [i_0] [i_0 + 3] [i_0 + 3]) : (arr_8 [i_0 - 1] [i_0 - 1] [i_0]))) - 3312))))) ? ((~((var_0 ? (arr_6 [i_0] [10] [i_0] [i_0]) : (arr_5 [17] [i_1] [16] [i_0]))))) : (arr_10 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [i_1])));
            }
        }
    }
    var_19 = ((((((var_0 ? var_8 : var_9))) ? var_14 : (max(var_14, var_4)))));
    #pragma endscop
}
