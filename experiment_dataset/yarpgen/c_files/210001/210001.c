/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, 4611123068473966592));
                    arr_8 [i_1] [i_0] [i_0] [i_0] = 64093;
                    var_21 = (-2147483640 ? 2147483645 : 831440522);
                }
            }
        }
    }
    var_22 = (min((var_18 > var_6), (max((~10), -var_18))));
    var_23 = ((1428167099 ? -21215 : 15636));
    var_24 = var_13;
    #pragma endscop
}
