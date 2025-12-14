/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (+(max((min((arr_2 [i_0] [i_0]), 2401703215827053591)), 1)));
                var_19 = (arr_4 [i_0]);
                var_20 += (min((0 == -12198), ((3515808956 / ((32640 ? 3515808956 : 17795881588135436698))))));
            }
        }
    }
    var_21 = (max(var_16, ((((min(var_17, 56373162)) >= (1 < 3477642475))))));
    var_22 = (((var_4 ? ((31 ? var_10 : var_13) : var_0))));
    #pragma endscop
}
