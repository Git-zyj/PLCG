/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 -= 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (!3901123511);
                                var_20 = var_0;
                                var_21 -= var_12;
                                var_22 = ((1298726293407405266 >= (~12501075593742637700)));
                            }
                        }
                    }
                }
            }
        }
        var_23 = ((-10 ? (~4294967295) : -53517));
        var_24 -= 1;
    }
    var_25 = max(-18446744073709551615, 33);

    /* vectorizable */
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        arr_19 [10] [i_5] = ((!((((-3 + 2147483647) >> (6415 - 6387))))));
        var_26 = (min(var_26, 2456493382851795138));
        var_27 = (min(var_27, (~91)));
        var_28 = -3904;
        var_29 = (((((var_15 ? 222 : -107))) >= var_13));
    }
    #pragma endscop
}
