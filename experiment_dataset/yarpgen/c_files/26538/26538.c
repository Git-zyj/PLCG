/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((13096 ? -13096 : var_8)) + 2147483647)) >> (var_10 + 72249808))) << var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_1]);
                arr_5 [i_0] [2] = ((~(((-1267211433 >= (min((arr_2 [i_1]), var_3)))))));
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
