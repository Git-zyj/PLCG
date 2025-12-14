/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(32175, (var_8 != var_2)));
    var_15 = var_1;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 = (min((arr_1 [i_0]), ((((((arr_1 [i_0]) == var_12)) ? 32175 : (arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 ^= (((arr_7 [i_2] [i_3] [i_2] [i_1] [i_2]) && 33364));
                        var_18 = (!0);
                    }
                }
            }
        }
        var_19 = -9223372036854775804;
        var_20 = (max(-2147483642, (((734736673 >> 0) / (arr_6 [i_0] [i_0] [i_0] [i_0 + 2])))));
    }
    #pragma endscop
}
