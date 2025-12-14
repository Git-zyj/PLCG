/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] [1] = ((max(((var_7 ? var_5 : (arr_6 [i_0] [i_0] [i_1]))), var_0)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_12 ^= 255;
                    arr_11 [i_0] [i_1] [i_1] &= arr_2 [i_0];
                }
                arr_12 [i_1] = (arr_9 [i_1] [5] [i_1] [19]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_13 = (min(var_13, ((((arr_0 [i_0]) | (arr_15 [i_3] [i_3]))))));

                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_14 += ((((((arr_5 [i_1] [i_3]) <= (arr_20 [i_5] [i_4] [i_3] [i_1] [8])))) ^ ((~(((var_7 && (arr_10 [1] [i_1]))))))));
                                var_15 = (((0 ? (arr_2 [i_0]) : 31886)));
                            }
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_16 ^= arr_1 [i_0];
                                arr_23 [i_1] [18] = ((((var_8 ? (arr_2 [i_4]) : (arr_3 [i_6] [i_1]))) & (((max(47988, (arr_4 [i_1] [i_1] [i_1])))))));
                                arr_24 [15] [i_1] [i_3] [i_4] = (((-1 | (min(var_11, 0)))));
                            }
                            var_17 += ((~((+(max((arr_15 [i_3] [i_4]), (arr_5 [i_0] [i_0])))))));
                            var_18 = (arr_19 [i_0] [i_0] [20] [i_0] [7]);
                        }
                    }
                }
            }
        }
    }
    var_19 -= ((((max((!0), 29789))) ? var_1 : (((((0 ? 1 : 0)))))));
    #pragma endscop
}
