/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_2 ? (1234475066 <= var_3) : var_4)) / var_11));
    var_15 -= (max((((var_6 ? var_12 : 176050229))), var_13));
    var_16 = (((-var_7 ? var_6 : 21680)) != (((var_4 | var_8) ? (43856 & 25346) : var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 ^= ((var_4 ? var_3 : ((((!(arr_9 [i_0] [7] [i_2] [7])))))));
                    var_18 = ((((arr_2 [i_0] [i_2]) ^ (arr_9 [i_2] [i_2] [i_2] [i_2]))));
                    var_19 -= (arr_5 [i_1]);
                    var_20 += (((arr_0 [i_0] [i_0]) | 1572765531));
                    var_21 = (max(var_21, var_11));
                }
            }
        }
    }
    #pragma endscop
}
