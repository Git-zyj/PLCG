/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (((var_6 ? var_6 : 1610635341)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [10] [i_2] [9] = var_6;
                    arr_8 [1] [i_2] = arr_6 [i_0] [i_0] [i_1] [2];
                    var_14 -= (arr_2 [i_2 + 2]);
                    var_15 += (arr_5 [i_2] [i_2] [i_2] [1]);
                    var_16 = ((arr_4 [i_2] [i_2 + 1] [i_2 + 2]) ? (min(((1610635314 ? 210 : -6606232957179291562)), (((var_8 & (arr_1 [i_0])))))) : (((((!2519816702379223926) > -338713279465565500)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                var_17 = (max(var_17, ((179 ? (min((arr_3 [i_4] [i_4 + 1] [i_4 + 1]), (arr_5 [i_3] [i_4 + 1] [i_3] [i_4 + 1]))) : (((((((arr_12 [i_3] [i_3]) ? (arr_4 [i_4 + 1] [i_4] [15]) : (arr_13 [i_3] [i_3])))) ? (((arr_4 [i_3] [i_4] [i_4 + 1]) ? var_4 : var_9)) : 1)))))));
                arr_15 [i_4] = ((!(((var_2 ? 2047 : var_6)))));
                arr_16 [i_4] = 255;
                var_18 = (arr_5 [i_3] [i_4] [i_3] [20]);
            }
        }
    }
    #pragma endscop
}
