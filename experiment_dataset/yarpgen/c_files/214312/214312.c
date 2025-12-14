/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_4 ? var_4 : (max((max(1002167969, var_4)), var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (min((((arr_6 [i_0] [i_0] [i_0]) ? var_9 : 121)), -124));
                    var_16 += (((((0 && var_1) || (var_4 && 283340689))) ? -2147483638 : (max((!var_13), (max(var_0, (arr_4 [i_0] [i_0] [i_0])))))));
                    arr_8 [i_0] [i_1] [i_1 + 3] [i_0] = -3975952419320537777;
                }
            }
        }
    }
    var_17 = var_13;
    #pragma endscop
}
