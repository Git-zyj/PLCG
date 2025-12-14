/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1390233180 ? var_5 : ((min(0, 2904734116))));
    var_20 -= ((!((min(var_5, 1)))));
    var_21 = (((!var_18) && (((((var_17 ? var_8 : -1))) && (18446744073709551615 && 18446744073709551615)))));
    var_22 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_23 = ((1385 & (((min(1073741816, 4294967295)) ^ (arr_10 [i_1] [i_1])))));
                            var_24 = (((min(var_16, var_7))));
                            var_25 = (max(((2559170572 + (var_12 + var_4))), var_16));
                        }
                    }
                }
                var_26 = (min(var_26, var_14));
                arr_11 [i_1] [i_1] = ((((((arr_1 [i_1]) - (4405 | var_18)))) && (((32767 ? 64150 : 2147483647)))));
                var_27 = ((1073741816 >> (((1073741816 - var_4) / (var_14 / 1)))));
                var_28 = (arr_0 [i_0] [0]);
            }
        }
    }
    #pragma endscop
}
