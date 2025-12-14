/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [6] [i_1 + 2] [12] [i_1 + 2] = ((((min((arr_1 [i_0]), (arr_5 [i_2 + 1] [i_0])))) + (min((arr_1 [i_0]), var_3))));
                    var_11 = ((~(((arr_1 [1]) ? 18446744073709551603 : var_5))));
                    arr_10 [i_1] = (+(((((arr_1 [i_0]) << (((arr_3 [i_0]) - 1484420592)))) >> (((max(19, 3414798678)) - 3414798672)))));
                }
            }
        }
    }
    var_12 = ((((171 ? 18446744073709551598 : -var_1)) + (~var_1)));
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                var_14 = (min(18446744073709551598, (arr_14 [i_4 - 1] [4])));
                var_15 &= 0;
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
