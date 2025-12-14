/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_6;
    var_15 = ((((((36441 + 5) == -5))) << 5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((0 != -101) && (13024581051706430696 != 101));
                var_16 = (((-17607 || 174) << ((((3260444363 >> (4258722178 - 4258722153))) - 68))));
                var_17 *= ((13024581051706430683 != (-101 & -1167164675)));
            }
        }
    }
    var_18 = var_13;
    var_19 = var_2;
    #pragma endscop
}
