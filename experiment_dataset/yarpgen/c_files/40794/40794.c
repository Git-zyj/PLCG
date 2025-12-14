/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (min(((((!(arr_4 [i_2]))))), var_7));
                    var_13 = (max(var_13, (((((min(-31242, 1071644672))) ? ((1071644680 ? 31242 : (arr_1 [8]))) : (~var_3))))));
                    var_14 -= ((((var_10 > (arr_3 [i_0] [i_2 - 2] [i_2])))));
                    var_15 = var_12;
                }
            }
        }
    }
    var_16 += var_5;
    var_17 += var_5;
    #pragma endscop
}
