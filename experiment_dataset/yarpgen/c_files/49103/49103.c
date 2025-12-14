/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(9223372036854775807, -249))) - (max((!9223372036854775807), (max(18446744073709551586, 18446744073709551615))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (max((((((min((arr_0 [i_2]), 1))) != -var_13))), 32767));
                    var_19 = -var_0;
                    arr_8 [i_0] [i_0] [i_0] = ((8301315587324329003 & (((-((max(var_10, 255))))))));
                }
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
