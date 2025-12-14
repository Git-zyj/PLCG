/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((2838019411 ? 129 : 792255167)) == var_10))) + var_4));
    var_19 = (((!10) >= var_16));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 ^= -7571;
                    arr_8 [i_2] [i_1] [0] = 13887;
                    var_21 -= (arr_6 [i_0] [i_0] [i_0 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
