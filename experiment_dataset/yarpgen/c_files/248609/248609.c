/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((var_6 <= (arr_2 [i_0] [i_1] [i_1]))) ? (((36028762659225600 ? 121 : 1))) : ((-2631121223185654826 ? (arr_4 [i_0] [i_0]) : var_3))));
                var_12 = ((2631121223185654831 ? (arr_4 [i_0] [i_1]) : (~123)));
            }
        }
    }
    var_13 = var_4;
    var_14 += var_0;
    var_15 = min(6, (~var_10));
    #pragma endscop
}
