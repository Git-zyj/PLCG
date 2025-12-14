/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_10, var_5));
    var_15 = var_1;
    var_16 = (((min((min(var_8, var_7)), (min(-90, var_6)))) * var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = var_13;
                var_18 = (arr_4 [i_0] [i_0]);
                arr_6 [i_0 - 1] [i_0] = var_1;
            }
        }
    }
    #pragma endscop
}
