/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((min(-var_9, (((var_11 ? var_1 : var_12))))))));
    var_15 = (min(var_15, var_5));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] = var_12;
                    arr_7 [i_0] [i_1] [i_2] = (((max((max(var_5, -6267654378334153254)), (arr_1 [i_1 - 2]))) != (((max(-24840, (var_5 <= var_12)))))));
                }
            }
        }
    }
    var_16 &= var_10;
    var_17 = var_9;
    #pragma endscop
}
