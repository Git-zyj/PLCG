/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 &= (max((arr_4 [i_0] [i_0]), (((arr_11 [i_1] [i_0]) ? -2147483643 : var_16))));
                            var_21 = (3451057280 + 9613916383571676537);
                        }
                    }
                }
                var_22 = ((((((((2147483643 ? 1518164936 : var_8))) ? (arr_4 [i_1] [i_1]) : (~var_12)))) ? var_18 : (((((var_7 ? var_12 : 4274475898))) ? ((max(var_4, (arr_5 [i_0] [i_0])))) : ((3127076955 >> (9613916383571676538 - 9613916383571676507)))))));
            }
        }
    }
    var_23 = var_12;
    #pragma endscop
}
