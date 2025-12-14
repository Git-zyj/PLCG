/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_7);
    var_12 = (((!(-14886 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 += (((1 - var_6) ? (min((-2047108374 || 2047108383), ((697772875 ? var_5 : (arr_1 [15]))))) : ((-9223372036854775804 ? (((var_5 << (var_3 - 4737)))) : var_3))));
                arr_7 [9] [i_1] [i_0] = ((((((min(var_5, (arr_4 [i_0] [i_1])))))) ? (((-var_10 - (((arr_6 [i_0] [i_0] [i_0]) ? -2047108404 : -1807488562))))) : ((var_4 ? (arr_2 [i_0] [i_0]) : (((1433598771586905494 ? var_3 : 225)))))));
            }
        }
    }
    #pragma endscop
}
