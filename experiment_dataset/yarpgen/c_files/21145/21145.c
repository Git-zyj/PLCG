/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((~(((!(((5213208553391317985 ? var_8 : var_6))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (-5213208553391317985 % 7467398320945698073);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 2] [5] [i_2] = ((min(255, 9196041474493618786)));
                    arr_10 [i_0] [i_1] [3] [i_0] = ((!((max(0, var_3)))));
                }
            }
        }
        arr_11 [i_0] = (((((~(!5213208553391317984)))) ? var_7 : (((-var_12 ? -65535 : 6)))));
    }
    #pragma endscop
}
