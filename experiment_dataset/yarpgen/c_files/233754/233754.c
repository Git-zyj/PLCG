/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_3));
    var_18 ^= (((max(((7412065424834893617 << (var_7 - 1504009478736281842))), var_2)) <= (0 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = 1;
                    var_20 = (((((((arr_1 [i_0]) && (var_3 - var_10))))) & ((~((var_2 ? (arr_1 [i_0]) : 1961233461))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_21 = ((+((((((arr_12 [i_3]) + (arr_18 [i_3] [i_6])))) ? (arr_9 [i_6]) : (arr_13 [i_7] [3] [10])))));
                                var_22 = ((((((((1 ? 11965728919210965860 : (arr_17 [i_7] [i_6] [i_4] [i_3])))) ? (((arr_18 [i_3] [i_3]) & (arr_5 [i_4] [i_4] [i_3]))) : (~1339)))) ^ ((((((arr_12 [1]) - var_5))) ? (((arr_18 [11] [i_7]) ? 0 : (arr_0 [18]))) : (arr_19 [11] [i_4] [i_4])))));
                                var_23 = 0;
                                arr_23 [i_4] [i_6] [1] = ((((var_14 ? (11965728919210965860 << 1) : (((255 ? (arr_9 [i_6]) : 1))))) / (((~((18446744073709551615 ? (arr_12 [i_4]) : (arr_21 [i_7]))))))));
                                var_24 = 0;
                            }
                        }
                    }
                    var_25 = ((min((((((arr_16 [14] [i_4] [i_4] [i_4]) + 2147483647)) >> (var_0 + 144))), ((max((arr_15 [i_3] [4] [i_5]), 12418))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_26 = ((+(max((arr_3 [i_8 + 2]), (arr_28 [i_3] [i_3] [i_5] [i_3] [i_8 + 1] [i_8] [i_3])))));
                                var_27 -= (var_16 ? (arr_8 [i_9]) : -8367939819181647592);
                                var_28 = (((856015341 | 1) ? ((((((750990171 ? var_5 : 6481015154498585756)) != (max(233, 1)))))) : (((((var_7 ^ (arr_24 [1] [i_5] [i_8] [1])))) ? 1961233461 : (((var_9 ? 1 : var_2)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
