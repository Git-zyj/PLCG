/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = 16;
                                var_15 = (((((((9713 ? var_9 : (arr_11 [i_2] [i_3])))) ? 30 : (arr_0 [i_0])))) ? ((var_3 ? var_2 : (~-9718))) : ((+((((arr_11 [i_3] [i_0]) || (arr_5 [i_0] [i_2] [i_0])))))));
                            }
                        }
                    }
                }
                var_16 = ((!(~9223372036854775807)));
                var_17 = (min(var_17, ((+((-((min((arr_8 [i_0] [i_0] [i_0] [0] [i_0]), var_8)))))))));
            }
        }
    }
    var_18 = var_5;
    var_19 = var_2;
    var_20 = ((((((((var_13 ? var_6 : var_1))) ? (var_3 && var_9) : (454877305 <= var_0)))) ? -var_0 : (-9223372036854775807 - 1)));
    #pragma endscop
}
