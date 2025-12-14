/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(var_3, 3900158042580486101)) << (((max((((var_6 ? var_14 : var_14))), var_4)) - 4125415855)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (((arr_1 [i_2]) ? -17777 : (arr_3 [i_0] [i_1] [i_2])));
                    var_18 = var_11;
                    var_19 = ((~((var_2 ? var_3 : (arr_0 [i_2] [i_0])))));
                    var_20 = -var_1;
                }
            }
        }
        arr_6 [i_0] = -var_13;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_21 = var_5;
        arr_10 [i_3] = (((arr_1 [i_3]) + ((-(arr_5 [i_3] [i_3] [i_3])))));
        var_22 = 17776;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    arr_17 [i_4] [i_3] [i_4] [i_5 - 1] = var_1;
                    arr_18 [i_4] [i_4] [i_5 - 1] = (var_6 && (!var_15));
                }
            }
        }
    }
    var_23 = (((((var_0 || var_9) && (!var_14))) || (((((min(var_5, var_2))) ? (!-3302722559952467200) : var_14)))));
    #pragma endscop
}
