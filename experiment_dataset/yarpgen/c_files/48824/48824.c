/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = var_8;
                arr_5 [i_1] [i_1] = (~-914214410);
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = ((~((4294967287 ? ((1 ? -3099510900778809242 : -914214411)) : (((var_9 ? var_4 : 65530)))))));
        arr_10 [i_2] = (((var_6 >= var_1) * (min(1405359082, 67108863))));
        arr_11 [i_2] = 2638;
    }
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_12 = ((((min(9, -var_7))) ? (((~(min(-9223372036854775796, -536870912))))) : var_2));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((((((-536870910 ? -9223372036854775791 : 49991))) ? (~18446744073709551615) : (((-9223372036854775796 ? 8 : 536870903))))) & -914214410)))));
                                arr_25 [i_7] [i_3] [i_3] [20] [i_3] [i_3] [i_3] = (~32119);
                                var_14 -= ((+(min((-2147483647 - 1), -27636))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (var_2 <= 15524);
    #pragma endscop
}
