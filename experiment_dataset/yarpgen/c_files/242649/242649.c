/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 1] = ((((((((~(arr_5 [i_0] [10] [3])))) ? var_10 : ((max(7, 105)))))) < (arr_2 [1] [1])));
                var_20 &= (((!86) ? ((0 ? (8796093018112 | 2198754820096) : (((((arr_1 [i_0]) > var_17)))))) : var_18));
            }
        }
    }
    var_21 = (0 <= 24);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_13 [11] [2] = ((((((arr_2 [i_2] [i_3]) ? (arr_2 [i_2] [i_2]) : (arr_12 [i_3])))) ? (((arr_12 [i_2]) * var_13)) : (arr_12 [1])));
                var_22 = (max(var_22, 4294967294));
            }
        }
    }
    #pragma endscop
}
