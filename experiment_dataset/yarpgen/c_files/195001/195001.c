/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (arr_3 [i_1]);
                    var_21 = (arr_6 [i_0] [i_1 - 3] [i_2]);
                    var_22 = 1;
                    var_23 = (((395127117 >= -1) && (((~(arr_7 [i_1]))))));
                }
            }
        }
    }
    var_24 = (max(var_24, ((max(290257813, 21741)))));
    var_25 = -var_17;
    #pragma endscop
}
