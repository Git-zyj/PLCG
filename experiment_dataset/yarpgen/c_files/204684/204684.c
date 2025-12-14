/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1 - 1] [i_2] = max(var_3, ((((~3651) ? ((max(22818, var_1))) : ((~(arr_1 [i_0] [6])))))));
                    var_12 += var_5;
                }
            }
        }
    }
    var_13 = (!4200065095);
    var_14 = var_1;
    #pragma endscop
}
