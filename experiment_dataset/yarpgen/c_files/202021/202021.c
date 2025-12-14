/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 ? var_19 : (((min(var_8, var_3))))));
    var_21 = 15874945195362105106;
    var_22 &= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_23 = (min((0 < 268431360), (((((14178 ? 15874945195362105106 : 4520495323288366061))) ? (!43366) : ((15874945195362105106 ? (arr_1 [i_0] [16]) : (arr_3 [i_0] [i_1] [i_0])))))));
                    arr_9 [8] [i_1 - 1] [i_1 - 1] [i_2] = ((-(arr_8 [i_1 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
