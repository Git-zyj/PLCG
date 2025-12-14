/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = 16769024;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_2] [i_1] [i_4] = (((((max(298122731, var_8)))) & (max((arr_12 [i_4] [i_3] [i_2] [i_2] [8] [i_0]), (min((arr_3 [i_0] [i_0]), (arr_8 [i_2])))))));
                                arr_16 [i_0] [i_1] [i_2] [12] = (-78 ? 4294967269 : var_13);
                                var_17 = (max((arr_3 [i_0] [i_0]), (min(((~(arr_3 [i_0] [i_4]))), ((max(1, 33549)))))));
                                var_18 = ((~(max((arr_0 [1] [i_3]), 1481859268))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_19 = ((min(((min(31990, var_11))), (((arr_8 [i_2]) ? var_14 : (-9223372036854775807 - 1))))));
                                var_20 += (((max(254, var_4))) ? (!-82) : 16769001);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = -99;
    var_22 = (max(((var_8 * ((max(33560, 2147483647))))), ((min(-var_3, ((77 ? 31953 : 1)))))));
    #pragma endscop
}
