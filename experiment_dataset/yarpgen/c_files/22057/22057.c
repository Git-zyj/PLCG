/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 ^= (max((arr_9 [i_2 + 1] [i_3 + 1] [i_1]), (arr_9 [i_2 + 2] [i_3] [i_1])));
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((-(min(1631097336, (arr_2 [i_2 + 2] [i_3 + 1])))));
                            arr_13 [i_0] [i_0] [i_0] = -25118;
                            arr_14 [i_0] [i_0] [i_2 - 1] [i_0] = ((~(1 >> 1)));
                        }
                    }
                }
                var_21 = ((1 ? (((-1 + 2147483647) << (((min(3322044674, 2371468870)) - 2371468870)))) : ((~(((-32760 + 2147483647) << (((var_1 + 7903567859034853826) - 16))))))));
                var_22 = (((min(0, -1734746912)) & 528955799));
                arr_15 [i_0] = (arr_5 [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
