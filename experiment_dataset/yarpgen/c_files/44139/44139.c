/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(9251, (min((max(var_12, var_1)), ((max(9251, var_8)))))));
    var_17 = (max(var_17, (!-6481887609456206771)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, -7226));
                    arr_6 [i_1] [i_1] [i_0] = (min(-32766, (max(var_8, -991666063))));
                    var_19 = (max(var_19, var_2));
                    var_20 = 884581407;
                }
            }
        }
    }
    var_21 = var_6;
    var_22 = 884581407;
    #pragma endscop
}
