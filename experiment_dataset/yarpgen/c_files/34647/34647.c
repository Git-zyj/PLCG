/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((-((-(arr_0 [i_0])))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 = ((+((-(max((arr_4 [i_1]), (arr_0 [i_1])))))));
        arr_6 [i_1] = ((~(min((arr_0 [i_1]), (arr_5 [i_1])))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_17 = max(((((max(1, (arr_8 [i_3])))) / (arr_10 [i_2 + 1] [i_2 + 1]))), 1);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_18 = (~3299187259);
                                arr_20 [i_2 - 1] [i_3] [i_4 + 1] [i_2 - 1] [i_6] = ((((max((min((arr_14 [i_3] [i_4] [i_5] [i_6]), (arr_1 [i_6]))), (max((arr_12 [i_5]), 1))))) ? ((max(16, 0))) : ((((max(1, 2147483647))) ? (arr_17 [i_4] [i_4] [i_3] [i_2]) : ((((arr_4 [i_3]) ? (arr_15 [i_6] [7]) : (arr_8 [i_5]))))))));
                                arr_21 [2] [i_3] [i_3] [i_5] [i_6] = ((~(max((((arr_13 [i_2] [12] [i_4]) ? (arr_12 [i_2 - 2]) : (arr_8 [i_2]))), ((min((arr_11 [i_2] [i_2] [i_6]), (arr_11 [i_2 + 1] [i_2 + 1] [i_5]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((~((min(1, 1)))))) ? (((~var_0) | ((min(var_13, var_15))))) : (((min(-2183, 44))))));
    var_20 = var_2;
    #pragma endscop
}
