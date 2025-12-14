/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (13838979295663105103 != 1);
    var_17 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 -= max(((13838979295663105119 % (((max(var_1, (arr_2 [i_0] [i_2]))))))), (((67 + var_12) ? (((34 ? 201326592 : -2147483643))) : (arr_5 [i_2] [i_0]))));
                    var_19 = (1 & 13838979295663105121);
                }
            }
        }
    }
    var_20 -= var_15;
    var_21 = (max(var_21, (!var_7)));
    #pragma endscop
}
