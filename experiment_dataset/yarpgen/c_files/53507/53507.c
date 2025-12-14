/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((var_7 & var_12), ((36517 ? 22638 : -34))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        arr_14 [i_3 - 2] [i_1] [i_1] [i_1] [i_3] [i_3] = ((34 ? 32767 : 26373));
                        var_20 = (((min(591272299830727717, ((18446744073709551606 ? var_14 : (arr_1 [13] [13]))))) >= (arr_8 [i_1] [16])));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((((((var_12 & 1368384455) + ((var_4 ^ (arr_8 [i_3] [6])))))) ? var_9 : (max(var_16, ((17298 ? (arr_5 [i_1] [i_2]) : 752155514))))));
                    }
                    var_21 = ((((18446744073709551606 <= (arr_6 [i_1]))) ? -24263 : 2468176494));
                    arr_16 [i_1] [i_1 - 1] [i_1] = (((min(1405284293, 1))));
                }
            }
        }
    }
    var_22 = var_18;
    var_23 = var_14;
    var_24 = (min(((((max(var_10, var_18))) ? (var_16 * 220) : ((var_11 ? var_13 : var_13)))), (var_0 < var_17)));
    #pragma endscop
}
