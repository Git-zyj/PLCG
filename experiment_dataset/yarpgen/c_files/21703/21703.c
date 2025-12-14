/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((~(1 * var_14))) ^ ((((~115) < var_13)))));
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 ^= ((var_6 ? var_0 : var_12));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 0;i_4 += 1)
                            {
                                var_23 = (((arr_11 [i_4 + 1] [i_3] [i_2] [i_1] [i_0]) / (min(1238061217, 1))));
                                var_24 = ((var_15 | ((15 ? -64 : (arr_6 [i_0] [i_1] [i_0])))));
                                var_25 = ((-((~(arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])))));
                            }
                            arr_12 [i_1] [i_0] [i_2] [i_3] = (((((((arr_7 [i_1] [i_1] [i_2 - 2] [i_2] [i_2]) & var_8)))) ? -64 : (min((arr_0 [i_0]), var_9))));
                            arr_13 [i_3 - 1] [i_0] [i_1] [i_0] [i_0] = ((+(((~127) ? -30671 : 64))));
                            arr_14 [i_0] [i_0] [i_2] [i_3] = 0;
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_0] = (max(((64 ? 37858 : 0)), -65));
                arr_16 [i_0] [i_0] = (((((1 ? (146 > var_17) : 64))) ? ((((var_9 ? (arr_2 [i_1] [i_0]) : 0)) ^ (((arr_7 [i_0] [i_1] [i_1] [i_1] [i_1]) ? var_8 : (-127 - 1))))) : var_14));
            }
        }
    }
    var_26 = ((((((78 && 95) % (60 && 1)))) ? ((var_19 ? -22696 : (~8867))) : var_18));
    #pragma endscop
}
