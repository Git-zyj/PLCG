/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 -= (-(((arr_0 [i_0]) ? (((arr_3 [i_0] [i_0] [10]) >> (var_6 - 83))) : (26241 == 114))));
                arr_6 [i_1] = (((((((arr_3 [i_1] [i_0] [16]) ? -111 : var_11))) && (arr_5 [i_1 + 1]))) ? (min((((arr_2 [i_0] [14]) ? (arr_0 [13]) : (arr_0 [2]))), (arr_5 [i_1]))) : (((((arr_4 [i_1 + 1] [i_1 + 1]) >= (arr_4 [i_1] [i_1 + 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_13 = (min(var_13, ((!((min((4 * 195), ((var_9 ? (arr_10 [i_2] [i_2] [i_2]) : (arr_0 [i_2]))))))))));
                arr_14 [i_2] [1] [1] = var_5;
            }
        }
    }
    var_14 = (min((((~2658465055) ? var_5 : (var_8 > var_6))), var_3));
    #pragma endscop
}
