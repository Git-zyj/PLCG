/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((var_0 ? var_8 : 1817845950))) ? (~var_1) : -var_11)) >= -28878));
    var_14 = (((~var_0) / (var_4 ^ var_8)));
    var_15 = 2477121345;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_0] = ((var_4 > ((min(-14004, 27572)))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [1] [i_4] [i_0] = (min(98, 1817845964));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_0] = var_10;
                        arr_20 [i_0] = ((+((((((arr_4 [i_2] [i_1]) ? var_4 : 1))) ? ((((arr_7 [i_0] [i_0] [i_0] [i_0]) && 9223372036854775807))) : (0 * 47298)))));
                        var_16 = (min(var_16, -49428));
                        arr_21 [i_0] [i_0] = ((((max((!var_3), (arr_17 [i_0] [i_1 - 2] [i_2] [i_2] [i_2] [i_2])))) != var_4));
                        arr_22 [i_0] [i_0] [i_0] [1] = (((~(((arr_2 [i_0]) ? -9223372036854775796 : var_10)))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_26 [i_0] [i_2 - 1] [i_0] = (~-28);
                        arr_27 [i_1] [i_2 - 1] &= (min((min((arr_10 [i_0] [i_0] [i_2] [i_6]), var_8)), (var_5 | 28891)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
