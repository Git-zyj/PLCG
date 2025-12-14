/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (((((((~(arr_2 [i_0])))) ? -var_8 : 3684792918))) ? var_1 : var_5);
                arr_6 [i_0] [i_1] = (~var_12);
                var_17 |= (arr_2 [i_1]);
            }
        }
    }
    var_18 = (1599343001 && 32767);
    var_19 = ((((!(~-1922964587)))));
    var_20 = (max(var_20, var_8));
    #pragma endscop
}
