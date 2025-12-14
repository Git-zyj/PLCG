/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((11667670513234216588 ? 11667670513234216588 : 235)), (235 * 21)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 *= (arr_3 [i_2]);
                    var_12 = (min(var_12, (arr_7 [11] [i_0] [i_1 - 2] [i_2])));
                    var_13 += (((((var_9 < (var_6 << 21)))) << (((arr_1 [21] [i_1]) - 11326))));
                }
            }
        }
    }
    #pragma endscop
}
