/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_20 += 255;
                        arr_14 [i_1] [i_2] [i_2] = (max(((0 ? ((7018 ? 1 : 214)) : ((min(33, var_18))))), var_12));
                        var_21 += (min(((max(167, -32358))), ((18 ? 503256738 : var_14))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_22 &= 0;
                                var_23 &= ((((var_15 ? -27335 : -15072))) ? ((max(1, 15078))) : -67);
                            }
                        }
                    }
                    arr_20 [i_1] = (max(21321, 182));
                }
                var_24 += (min((min(9223372036854775807, var_0)), -15079));
                arr_21 [16] [14] [24] = (max((max(((var_3 ? var_14 : var_1)), var_8)), (((22594 ? ((-1 ? 32358 : 15078)) : ((18 ? 237 : var_11)))))));
            }
        }
    }
    var_25 = ((88 ? ((max(((1 ? 36475 : var_1)), var_17))) : var_0));
    #pragma endscop
}
