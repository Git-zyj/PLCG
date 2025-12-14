/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((((((arr_1 [i_0 - 1] [i_1]) | (arr_1 [i_0] [i_1]))) | ((-24 ? (((arr_7 [i_0] [i_0 + 2]) ? -1686107925 : (arr_7 [i_0 + 1] [i_1]))) : (arr_7 [i_0] [i_1]))))))));
                arr_8 [i_0] [i_0] [i_0] &= ((((max((arr_3 [i_0 + 2]), var_7))) ? (max((arr_7 [1] [i_1]), (1 ^ var_4))) : ((max(((var_6 ? var_0 : var_16)), ((var_13 ? (arr_4 [i_0 + 2]) : -104)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                arr_17 [i_2] [i_2] [i_2] = ((!((((arr_11 [i_2 - 1]) ? (arr_11 [i_2 + 1]) : (arr_11 [i_2 + 1]))))));
                arr_18 [i_2] = (((((arr_13 [8] [i_3]) && (arr_10 [i_2 - 1] [i_3])))) | ((((!(arr_11 [i_2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {
                arr_24 [i_4] = 2494249596;
                arr_25 [i_4] = (arr_11 [i_4]);
            }
        }
    }
    #pragma endscop
}
