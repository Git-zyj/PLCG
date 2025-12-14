/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((min(1, var_1))) ? var_17 : var_2)), ((min((-8135868854741074829 == -1976405966), 6823828465272037814)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((var_0 ? var_0 : (min(var_14, 2875749125749070819))));
                arr_9 [i_0] = (min(((((min(var_13, var_19))) ? var_3 : (min(13795745157334367502, var_19)))), (((1 ? (min(var_19, 265825972)) : (~var_11))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (((((1 ? 1 : ((var_9 ? var_7 : var_17))))) ? var_11 : ((0 ? 2633546105126907335 : var_6))));
                                var_22 = var_7;
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = 5102380858486952539;
            }
        }
    }
    #pragma endscop
}
