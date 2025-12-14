/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_6, (min(1799507862, 946))))) && ((min(var_8, 75)))));
    var_15 = -var_1;
    var_16 = ((var_1 ? (min(var_7, (var_7 / var_7))) : 1212717184));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [1] = (arr_4 [i_1 - 2] [i_0]);
                arr_6 [i_0] [i_0] [i_1] = ((!(((-667222460 - (((arr_4 [i_0] [i_0]) * 1)))))));
                var_17 += 1;
            }
        }
    }
    var_18 = -3981298705115034800;
    #pragma endscop
}
