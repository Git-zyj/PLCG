/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = ((((max(-107, -1))) * (((32256 <= (!4294967295))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = (max((((984852668980299863 | 4284432168910187463) ? ((var_11 ? 549487378432 : var_10)) : (((-170351802 ? 170351801 : 121))))), (((((40518 ? 4294967295 : 3579680524399141258))) ? var_5 : (min((arr_0 [i_2]), var_3))))));
                            }
                        }
                    }
                    var_17 = ((((-((52489 ? 170351801 : var_4)))) >= (((33275 ? 51 : 25018)))));
                }
            }
        }
    }
    var_18 *= var_6;
    var_19 = ((-170351801 ? 170351776 : ((170351801 ? -107 : (-32767 - 1)))));
    var_20 &= (min(45631, 1));
    #pragma endscop
}
