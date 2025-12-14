/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 * var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1 - 1] [i_1] [i_0] = ((211 ? (arr_2 [i_1]) : 167));
                arr_7 [i_1] = ((!(arr_5 [i_0] [i_1])));
                arr_8 [i_0] [i_1 - 2] = (max((((!(((1 ? (arr_1 [i_1]) : var_8)))))), -1));
            }
        }
    }
    var_14 = 12;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_2] [4] = 211;
                arr_15 [i_2] [12] &= (((((-1 ? var_3 : var_1))) ? (arr_9 [i_2] [i_2]) : ((((max(-5, 31))) ? (var_11 && 1) : 5138436136124553402))));
            }
        }
    }
    #pragma endscop
}
