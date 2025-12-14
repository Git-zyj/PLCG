/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_6 >= ((2 ? 254 : var_10)))));
    var_15 = var_9;
    var_16 = (!var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = ((((212 >= 4294967295) <= -1509875437)));
                    var_18 += var_3;
                    var_19 = (min(var_19, 4294967280));
                    var_20 = var_12;
                }
            }
        }
    }
    var_21 = -445883065;
    #pragma endscop
}
