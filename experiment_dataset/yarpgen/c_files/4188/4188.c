/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = 3673973526;
                                var_12 -= ((min(((19 ? var_4 : var_1), ((1 * (arr_12 [i_0] [i_0] [i_0 - 3] [i_0 + 4])))))));
                            }
                        }
                    }
                    var_13 = (max(var_7, (min(var_1, (arr_2 [i_2 - 2] [i_0 + 2])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_7] [i_5] = min(-451392585, 451392584);
                    var_14 = -16384;
                    var_15 -= min(var_2, ((-129214799 ? 2363549729685173119 : 32640)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_16 ^= (~612108542);
                                var_17 = ((-((((5 ? (arr_20 [i_5]) : 480)) | (arr_26 [i_8] [i_5] [i_6 + 1])))));
                                var_18 = ((234881024 ? 16383 : -612108543));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
