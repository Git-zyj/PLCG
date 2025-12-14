/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_4 + ((85 ? var_15 : var_17))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 &= ((((var_1 ? -170 : ((var_17 ? var_4 : 183))))) <= ((((var_12 >> (var_1 - 65))) - -13139)));

            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                arr_10 [i_2] [i_1] [i_2 - 1] [i_1] = ((((((-13139 ? var_16 : var_12)))) || 13139));
                var_20 = var_18;
            }
            var_21 = ((-(var_13 > -1)));
            arr_11 [i_0] [i_1] = (max((4708889954281983897 - var_14), var_6));
        }
        var_22 = ((var_6 ? 1 : ((13139 ? var_10 : 13137))));
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        arr_15 [i_3] = ((!(0 | 2306450882)));
        var_23 = 16128;
        arr_16 [i_3] [i_3] = ((((!-13132) != var_3)) ? (((-(-127 - 1)))) : ((((-13137 + 2147483647) >> (54723 - 54695)))));
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_24 = ((2028467446 >> ((((-(arr_17 [i_4 + 2]))) + 56175))));
                arr_23 [i_4] [10] [i_4 + 2] = var_2;
            }
        }
    }
    #pragma endscop
}
