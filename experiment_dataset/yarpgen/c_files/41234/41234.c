/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_21 = (~-173802087);

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_22 = (!var_0);
                    var_23 = (~-var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_24 &= ((~(arr_10 [i_0] [3] [i_0] [i_0] [i_0] [i_0])));
                                arr_14 [i_1] [i_1] [i_2 - 2] [9] [8] [9] [9] = var_1;
                            }
                        }
                    }
                    var_25 -= (!var_16);
                }
                var_26 = ((+(((!var_3) << (var_14 - 46739)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 17;i_6 += 1)
        {
            {
                var_27 = 203767504;
                var_28 = (+(((!var_4) % var_12)));
                arr_20 [i_5] [i_5] = var_15;
                arr_21 [11] [i_5] = 173802069;
            }
        }
    }
    var_29 = var_6;
    var_30 = var_4;
    #pragma endscop
}
