/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((max((max((arr_5 [i_0] [i_1] [i_2] [i_1]), (max(128, -1280926798)))), (((-13795 >= ((var_15 ? (arr_5 [i_1] [i_1] [2] [i_1]) : var_3))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = ((((((!(var_5 < 2054))))) < (max(((var_5 ? var_5 : var_2)), ((min((arr_13 [i_0] [i_2] [i_2] [11] [i_0] [i_4]), (arr_13 [i_0] [1] [1] [i_0] [1] [1]))))))));
                                var_18 = ((var_8 < (max(-6770500441226607355, (arr_2 [i_0] [5])))));
                                var_19 = ((-(((-(arr_11 [i_2] [i_2] [11]))))));
                                arr_14 [11] [i_2] [6] [i_3] [i_4] [i_4] [i_3] = (arr_12 [i_2] [i_2] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_20 = (((arr_12 [i_5] [i_9] [i_5]) >= ((~(arr_3 [i_7 + 1] [i_8] [i_9])))));
                                var_21 = 1;
                            }
                        }
                    }
                }
                var_22 = (min(var_22, ((((max((!var_13), var_15))) < (((((((var_13 > (arr_13 [i_5] [i_5] [4] [i_6] [i_6] [i_6]))))) >= var_11)))))));
                var_23 ^= var_0;
            }
        }
    }
    var_24 = (min(var_24, ((((((var_13 ? (1 * 243043814) : var_10))) ? (max(var_13, var_4)) : var_6)))));
    #pragma endscop
}
