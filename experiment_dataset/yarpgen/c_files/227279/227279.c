/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((!-20942), ((max(var_12, 4611684918915760128)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((min((arr_0 [i_0]), (4611684918915760128 > 17372472))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_19 = min((((arr_6 [i_1 - 3] [i_1]) ? var_11 : (arr_6 [i_2 + 1] [i_1 + 1]))), (!4611684918915760128));
                            var_20 = 13835059154793791488;
                            var_21 = ((17372472 ? 0 : (-32767 - 1)));
                        }
                    }
                }
            }
        }
    }
    var_22 = (~var_12);
    #pragma endscop
}
