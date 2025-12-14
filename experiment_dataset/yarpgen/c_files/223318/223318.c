/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 12911607366276085435;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((~((min(-917177235, (arr_2 [i_0] [i_0] [0]))))));
                var_11 &= 234;
                arr_7 [i_0] = 45069;
                var_12 = (42410 / -8494574399212491867);
            }
        }
    }
    var_13 *= 1502;
    #pragma endscop
}
