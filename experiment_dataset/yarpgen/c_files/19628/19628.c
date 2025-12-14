/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -757152461;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (((((arr_4 [i_0] [i_1] [i_1] [i_1 - 1]) - var_1)) - ((757152457 ? 0 : 757152458))));
                    var_16 = ((((((-51 + 2147483647) << (757152458 - 757152458)))) ? ((((arr_3 [i_0] [i_1 + 1] [i_1 + 1]) <= ((var_10 ? var_5 : (arr_1 [i_0])))))) : (((((!(arr_4 [i_0] [i_0] [i_1] [i_2]))) && (((var_2 ? var_9 : var_11))))))));
                    var_17 = arr_1 [i_0];
                }
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
