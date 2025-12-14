/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -255;
    var_17 *= (~((((255 + 169) == var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((255 ^ (arr_8 [i_0] [i_0] [i_0] [12])))))));
                    arr_9 [i_0] [i_1] [i_0] = 65535;
                    var_19 = (max(var_19, ((6568 ? (((!(arr_8 [7] [i_2] [i_1 - 3] [6])))) : -118))));
                }
            }
        }
    }
    #pragma endscop
}
