/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 9980857929032735207;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = 4294967292;
                    arr_7 [i_0] = (((max(829346688, 272424030)) + (3242678882 && var_5)));
                }
            }
        }
    }
    var_19 = (min(var_19, var_14));
    #pragma endscop
}
