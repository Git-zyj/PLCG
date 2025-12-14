/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 -= -96;
                    arr_11 [i_1] [i_1 + 1] [i_1] [i_1] = 25;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [0] [i_3] [i_1] = var_10;
                                var_20 = ((-(((3217052504 / -6498488276160212027) * var_13))));
                                var_21 = (min(var_21, ((max(var_10, -5419)))));
                            }
                        }
                    }
                    var_22 = var_6;
                    var_23 ^= (~1);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            {
                arr_22 [i_5] = (min((max(var_9, 1)), var_5));
                var_24 = (min(var_24, (4294967295 * var_0)));
                var_25 = ((~(21998 * 1)));
                arr_23 [i_5] [i_5] = ((!((max(0, ((58777 ? 1 : 1)))))));
            }
        }
    }
    var_26 |= var_10;
    #pragma endscop
}
