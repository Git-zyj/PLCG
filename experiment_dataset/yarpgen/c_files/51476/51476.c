/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((((min(((var_13 ? var_16 : 5515729456184555787)), -11438))) ? (31 > var_14) : 1));
    var_21 &= ((((((max(var_2, 3855629003))) ? var_13 : (var_1 & var_7)))) ? (min(2785564449927684256, 176)) : -20);
    var_22 += var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_23 = (((arr_10 [i_2]) ? ((0 ? (4586 - -15) : ((78 ? (arr_9 [i_0] [i_0] [i_2] [i_0]) : (arr_6 [i_2]))))) : 0));
                    var_24 = arr_9 [i_2 + 1] [i_0] [i_0] [12];
                    var_25 = (arr_2 [2] [2]);
                }
            }
        }
    }
    #pragma endscop
}
