/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((0 >> ((((var_1 > var_6) || var_1)))));
    var_11 = ((((var_4 ? var_1 : ((-124 ? -1857717525 : -3)))) % ((max(40, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = 0;
                var_13 *= ((((!((min(2442978871978369069, var_4))))) ? ((9 ? -24 : var_4)) : ((65535 ? 15687 : 126))));
            }
        }
    }
    var_14 |= ((!((max(0, 128)))));
    var_15 = 1857717512;
    #pragma endscop
}
