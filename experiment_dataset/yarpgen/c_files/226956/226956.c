/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-((((max(var_14, 17770))) >> (((var_12 << 1) - 10075583820521314489)))));
    var_16 = (max(((((16384 ^ 31300) ? -var_11 : ((min(1, 0)))))), ((var_1 ? (((max(var_11, var_8)))) : 857882878))));
    var_17 = ((var_10 ? var_11 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (39188 > var_4)));
                    var_19 = (((!var_9) ^ (((arr_6 [i_0] [i_0] [i_0] [i_2]) ? var_14 : var_2))));
                }
            }
        }
    }
    var_20 = (min(var_20, 0));
    #pragma endscop
}
