/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_1, var_2));
    var_15 = (min(var_15, (!432345564227567616)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((max(170, 2604212743330632522)))));
                    var_17 = 4138466824;
                }
            }
        }
    }
    var_18 = (((8454881699857837183 ? -9632 : (-32767 - 1))));
    #pragma endscop
}
