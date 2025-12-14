/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 += ((max(var_8, 65532)));
                                var_16 *= ((((((24 >> (200 - 197)) > var_8)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_17 = (((arr_0 [i_0]) ? (arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_5] [i_6]) : var_3));
                                var_18 = (((((((0 && (arr_0 [i_0 + 1])))))) ? 45 : ((min(0, 4294967295)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_19 *= ((0 ? (arr_1 [i_0] [i_2]) : ((((arr_7 [i_0 - 2] [i_0]) ? (arr_7 [i_0] [i_0]) : 0)))));
                                var_20 = (min((max((arr_23 [i_0] [i_1] [i_2] [i_7] [i_0] [i_8 + 1]), (arr_23 [i_0] [i_1] [i_1] [i_2] [i_1] [i_8 + 1]))), (((37 ? (arr_19 [i_0] [i_0] [i_0] [i_0 - 2]) : 473281959)))));
                                var_21 ^= (((arr_6 [i_7 + 2] [i_7 + 2] [i_2] [i_0 - 1]) ? (arr_6 [i_7 - 1] [i_7 - 1] [i_2] [i_0 - 2]) : (arr_6 [i_7 + 4] [i_1] [7] [i_0 - 2])));
                                var_22 = (min(var_22, (arr_23 [i_0] [i_0] [i_8 + 1] [i_8] [i_8 + 1] [i_0])));
                                var_23 = (min(var_23, 2039131219));
                            }
                        }
                    }
                    var_24 += 232;
                }
            }
        }
    }
    var_25 = ((236 ? var_2 : 0));
    #pragma endscop
}
