/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [7] [i_2] [i_2] [i_1] = (((((11 ? 127 : -54))) ? (((arr_7 [0] [i_3 + 1] [i_2 - 1]) - (1 && var_5))) : (((~(((var_2 + 9223372036854775807) << 0)))))));
                            arr_11 [i_0] [i_2] [i_1] [i_3 - 1] = (~4);
                        }
                    }
                }
                arr_12 [i_0] [4] = ((+((((((arr_1 [i_0] [i_0]) ? (arr_8 [6]) : var_16))) ? (arr_3 [i_0] [i_0] [i_0]) : (var_17 <= var_3)))));
            }
        }
    }
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_5] [i_4] = var_6;
                arr_20 [i_4] = ((((min(541309400, 2199023190016))) ? 129 : (min((4294967169 << var_5), (arr_13 [16])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                arr_27 [i_6] = ((min(var_18, 26)));
                var_20 = (max(((~(arr_21 [i_7]))), (((arr_21 [i_6]) | (arr_21 [i_6])))));
                var_21 = (min(var_21, ((((arr_16 [i_6] [i_6]) ? (((var_6 || (!var_15)))) : ((min(246, 1))))))));
                arr_28 [i_6] = (0 | 4264710225);
            }
        }
    }
    var_22 = (!var_16);
    #pragma endscop
}
