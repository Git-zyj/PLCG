/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_2 + 2] [12] = (max(-55, 1099511627775));
                    var_17 ^= (arr_7 [i_2 + 3] [i_1] [i_2] [21]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 ^= (((((22902 ? 217 : (min(14536897666131297223, 217))))) ? 4294967295 : 65535));
                                arr_16 [i_0] [1] [i_1] [i_3] [i_4] = (~(((arr_11 [i_1] [i_1] [4]) ? (31 * -1) : (min(var_14, 9187363110547861724)))));
                                arr_17 [i_1] [0] [i_2] [i_1] [i_1] = (arr_9 [0] [i_4 + 1] [i_2 + 1]);
                                arr_18 [i_4] [i_1] [i_0] [1] [i_1] [i_0] = (min((max((arr_8 [i_2 + 3] [i_1] [i_4 + 1] [19]), (arr_9 [i_2 + 3] [i_2 + 3] [i_4 + 1]))), (arr_8 [i_2 + 3] [i_1] [i_4 + 1] [i_4 + 1])));
                                var_19 &= var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 206;
    var_21 = 1;
    #pragma endscop
}
