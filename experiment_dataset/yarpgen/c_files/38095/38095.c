/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 ^= ((!(((24165 ? 16062224171045869579 : ((170 ? 12462240584119407765 : (arr_1 [i_1]))))))));
                var_15 += (((((((var_11 ? 0 : var_12))) ? var_9 : (min(4286578688, 0)))) / -1493706192));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (((var_6 ? (min(25, 9223372036854775807)) : (arr_6 [i_0] [8] [8] [1]))));
                                var_17 = 35015;
                                arr_12 [i_0 - 2] [i_0 - 2] [i_2] [i_3 - 2] [1] [i_4] = ((((min(22349, var_0))) >= ((((min(var_9, 1))) * (((!(arr_7 [i_0]))))))));
                                var_18 = (((((0 & ((32357 ? 112 : -1))))) ? (((~2147483647) | (~var_8))) : (((~2147483647) ^ (~var_1)))));
                            }
                        }
                    }
                }
                var_19 &= var_2;
                var_20 = var_11;
            }
        }
    }
    #pragma endscop
}
