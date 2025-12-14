/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-(max(var_7, -var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((-(((((-(arr_1 [i_0] [i_0])))) ? -1764190980 : (((max(var_12, (arr_0 [i_1])))))))));
                var_16 = ((-(29892 || 65533)));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] = (((arr_6 [i_0] [i_1] [i_0]) ? 1 : (0 <= 286922834)));
                            arr_9 [i_2 - 1] [15] [i_2] [i_0] [i_2 - 3] [i_2 - 2] = var_11;
                            var_17 = ((-((7 ? 286922856 : var_13))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 = ((-(((-101 > 24381) / -1))));
                                var_19 = ((-((max((arr_6 [i_1 - 1] [i_1] [i_0]), (arr_6 [i_1 - 2] [i_1 - 2] [i_0]))))));
                                var_20 = (max(var_20, ((((((arr_11 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]) ? -22919 : var_1))) ? 286922835 : ((255 ? var_5 : (((1920 ? 48 : 286922830)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
