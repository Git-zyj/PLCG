/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [i_0] = -3989381942071682670;
                                var_19 = var_14;
                            }
                        }
                    }
                }
                arr_14 [i_1] [i_0] = ((~(arr_1 [i_0 - 2])));
            }
        }
    }
    var_20 = var_2;

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_21 = ((17 ^ ((~(max((arr_16 [6]), var_3))))));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_24 [i_7] [i_6] = (((+-34686) * (arr_16 [i_5])));
                        var_22 |= (~17);
                        var_23 = (min((arr_20 [i_6] [i_5]), (arr_18 [i_5])));
                    }
                }
            }
            var_24 = var_17;
            arr_25 [i_5] = (max(var_17, (((63476 != 158) * ((97 << (1384411955895340503 - 1384411955895340486)))))));
        }
        var_25 = (min(var_25, (783501002 > 10585797514594109769)));
        var_26 += ((((((-19416598 ? (arr_16 [i_5]) : var_7)) & (((~(arr_21 [i_5])))))) > (((((arr_23 [i_5]) ? (arr_23 [i_5]) : (arr_15 [i_5] [i_5]))) * -var_11))));
    }
    var_27 = ((~((-((var_1 ? 9878 : var_15))))));
    #pragma endscop
}
