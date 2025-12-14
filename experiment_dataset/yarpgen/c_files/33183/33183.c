/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (61572651155456 ? 528140478 : -1303764411);
                    var_14 = ((!-122) ? ((~(~-1430384787))) : var_1);
                }
            }
        }
    }
    var_15 = (~(((2720502164 ? -528140479 : var_4))));
    #pragma endscop
}
