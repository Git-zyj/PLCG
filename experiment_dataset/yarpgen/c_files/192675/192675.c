/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 94;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((var_0 + ((max(((14003 ^ (arr_1 [i_0] [i_1]))), ((max(var_4, 76))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, 94));
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_4] [15] = 51503;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((((((max(var_2, var_6)) ^ (((var_9 ? 94 : 0)))))) & ((~(86 ^ var_8)))));
    var_14 = ((94 ? var_1 : ((max(var_4, var_2)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            {
                var_15 = (min(var_15, ((max((((max(var_8, -1079049883)) - 2479160683)), ((((0 + 2147483647) <= ((2147483647 ? 128 : (-32767 - 1)))))))))));
                var_16 = 3995301475630696428;
                arr_16 [i_5] = (~(((-8192990693235085218 <= (var_8 / 7)))));
                arr_17 [i_5] [i_5] = (((max(15553112717257357603, ((((-2147483647 - 1) ? 1 : 5469))))) >> (((67108864 >> 1) - 33554426))));
            }
        }
    }
    #pragma endscop
}
