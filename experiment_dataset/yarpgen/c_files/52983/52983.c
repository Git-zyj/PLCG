/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (((((((-8025370608307733108 ? -5726964247573761231 : var_0))) ? ((var_0 ? 135107988821114880 : (arr_3 [i_1] [i_0] [i_0 + 1]))) : 85327728))) ? ((((arr_1 [i_0] [i_0 + 2]) - 106))) : (arr_2 [i_0 + 1] [i_0]));
                var_12 -= ((((29 ? 2893351168 : var_5)) <= (!12448240643047226521)));
            }
        }
    }
    var_13 = (~9053812509483311704);
    #pragma endscop
}
