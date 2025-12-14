/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = 67108863;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = ((~(arr_7 [i_0] [i_4])));
                                arr_13 [i_1] [i_1] [i_1] [i_1] |= (max(((((arr_9 [i_0] [i_1] [i_2] [i_4]) ? var_5 : var_14))), (((((((arr_0 [i_0]) ^ var_7))) ^ (max(var_0, var_16)))))));
                                var_18 = (arr_6 [i_2]);
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = (max((arr_9 [i_2] [i_1] [i_2] [i_1]), (arr_12 [i_0] [i_1] [i_1])));
                }
            }
        }
    }
    var_19 = (min((((var_6 ? 3847878863610768512 : (-3847878863610768513 / var_3)))), (min(((max(3847878863610768512, -1))), (min(var_5, var_10))))));
    var_20 = (max(var_20, ((((((min(3847878863610768512, 3847878863610768516))) ? (!1) : ((var_8 ? var_7 : var_6)))) <= (min(((var_8 ? var_15 : var_6)), var_13))))));
    var_21 = (((var_4 / var_8) ? ((var_6 ? var_15 : ((var_1 ? -604727603 : var_1)))) : (min((~1), var_10))));
    var_22 = ((((min(var_6, var_3))) ? -3847878863610768512 : 536854528));
    #pragma endscop
}
