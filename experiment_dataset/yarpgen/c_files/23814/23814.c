/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (((var_1 & ((52455 ? var_4 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 = (min((max((arr_4 [i_0 + 1] [i_1 + 1]), (((arr_2 [i_1]) ? (arr_3 [i_1] [i_1 + 1] [i_1]) : (arr_1 [i_2] [i_0 + 1]))))), (((max(1, 0))))));
                    arr_8 [i_1] = ((-((min((arr_6 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_1 + 1] [i_1]))))));
                    var_17 = -52905;
                }
                var_18 *= 0;
                var_19 *= max(((((arr_2 [12]) ^ 52455))), (arr_0 [i_0 + 2]));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_20 = ((1 ? ((min(32767, 0))) : 0));
                            arr_14 [1] [i_1] = ((((((~(arr_5 [i_0] [i_4] [i_1]))) + 2147483647)) << (((((65533 << (((-127 - 1) + 129))))) - 131066))));
                            var_21 *= ((((arr_12 [i_4] [i_4] [i_4 - 3] [0] [i_4 - 3] [i_4 + 1]) / (63254 & 1400094892))));
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_0] = (((~1) & (((!(max(0, 1)))))));
            }
        }
    }
    #pragma endscop
}
