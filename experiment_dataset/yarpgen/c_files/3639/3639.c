/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((var_1 ? (~18446744073709551603) : ((max((min((arr_1 [i_1] [i_1]), 171)), 193)))));
                arr_6 [i_0] [i_0] = ((((max((arr_4 [i_0] [i_1] [i_1]), var_6)))) ? ((((min(1, var_1))) ? (((var_1 ? var_0 : var_11))) : 7359708188258516649)) : (((~(((arr_3 [i_0] [i_0] [i_1]) ? var_2 : -10))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_14 = (max(var_14, (((((max(18446744073709551593, (arr_14 [i_4 - 1] [i_4 - 1] [10] [i_4 - 1])))) ? ((96 ? (-9223372036854775807 - 1) : 15)) : (((~(arr_9 [i_4 - 1])))))))));
                    var_15 &= ((((((var_5 ? var_8 : var_6)) * ((1 ? 1 : var_1)))) / ((1422587618 ? (((-(arr_9 [i_3])))) : (~var_1)))));
                }
            }
        }
    }
    var_16 = ((23 >> (((!((max(var_10, 4017733998))))))));
    #pragma endscop
}
