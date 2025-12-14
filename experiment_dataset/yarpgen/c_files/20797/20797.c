/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (0 ? ((var_9 ? 14685826725387899786 : ((min(0, var_12))))) : (((4294967289 ? var_8 : 240))));
    var_19 &= var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] = (249 | 4294967295);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = var_12;
                                var_20 = var_4;
                                arr_17 [i_1] [1] [i_2] [i_1] [i_1] = (((!4294967282) ? (((var_5 != (arr_6 [i_1] [i_2])))) : 0));
                                var_21 = (max(78, (max((1 - 22), ((min(171, 1)))))));
                            }
                        }
                    }
                    var_22 = (min((min(84, var_8)), ((min(var_13, var_1)))));
                    var_23 = (((((arr_10 [i_0] [i_1] [i_1] [i_2] [i_1]) ? var_15 : (var_11 - var_17)))) ? 619889083 : (min((max(var_4, 252)), (!-4177029535051231526))));
                    var_24 = (min((max(0, (min(4297121054470291975, 4933218681221671112)))), ((max((-9223372036854775807 - 1), 4933218681221671114)))));
                }
            }
        }
    }
    var_25 = (min(var_25, var_8));
    #pragma endscop
}
