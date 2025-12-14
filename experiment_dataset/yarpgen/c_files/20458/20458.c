/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 176;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 -= var_10;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] = (!var_2);
                            var_17 = (~(arr_7 [i_1] [i_1] [i_1] [i_0]));
                            arr_10 [4] [5] [4] [i_3] [i_3] [i_0] = max(((((arr_3 [i_0] [i_0]) == ((-(arr_0 [i_0])))))), 2106330082750915684);
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_0] = -10052715645540443625;
            }
        }
    }
    var_18 = (min(var_18, -var_0));
    var_19 = -30010;
    var_20 = var_5;
    #pragma endscop
}
