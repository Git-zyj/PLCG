/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((-94 * var_9), ((min(var_8, (!var_3))))));
    var_11 = (((min(0, 18446744073709551607)) != (~var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (max(var_12, (((~(arr_1 [i_0] [i_0]))))));
        var_13 *= (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        arr_5 [10] = ((arr_1 [i_1 - 3] [i_1]) ? ((((min((arr_3 [i_1 - 3]), 13137370798277957282))))) : ((~(((arr_4 [i_1]) * -1369171354)))));
        var_14 |= ((!(!1776362729)));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_15 = (max((((var_7 <= (((arr_2 [11] [i_2]) ? var_0 : var_6))))), ((3614795737893216149 ? 4260607557632 : -84))));
                var_16 = max(((~(((arr_0 [i_3] [i_3]) - var_2)))), ((((((32512 / (arr_2 [i_2] [i_3])))) || ((min((arr_11 [i_2] [i_2] [i_2]), 2048)))))));
                var_17 = -716296473;
            }
        }
    }
    #pragma endscop
}
