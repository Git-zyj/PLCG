/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (-var_4 / 1);
                    var_19 &= var_5;
                    arr_10 [i_1] = ((var_5 ? (arr_2 [i_0]) : var_3));
                    arr_11 [i_0] [i_0] [i_1] [i_1] = (1 >= 1);
                }
            }
        }
    }
    #pragma endscop
}
