/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((47 ? (max(44528, var_14)) : var_1)) << ((((56839 ? 0 : 18446744073709551615)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 ^= (((((var_4 << (var_13 - 35)))) - ((((((arr_0 [i_1]) ? var_1 : var_1))) ? 32 : ((min((arr_0 [i_1]), 20994)))))));
                var_20 = (((((15484237129508036872 ? ((var_12 ? (arr_1 [i_0]) : var_1)) : (((var_11 << (-43 + 64))))))) ? (((!var_10) ? var_6 : var_1)) : (max((arr_3 [i_0] [i_0] [i_0]), (arr_0 [i_0])))));
                var_21 = ((((((((var_0 ? var_16 : var_1))) ? ((18446744073709551615 ? var_17 : var_12)) : var_14))) ? 86 : var_5));
                arr_5 [i_0] [i_0] [i_0] = ((min(var_14, var_16)));
            }
        }
    }
    var_22 = (-var_14 ? (min(var_17, ((var_9 ? var_1 : 195516547)))) : var_17);
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_23 = (~var_9);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((min(var_3, (min(var_3, ((((arr_13 [i_2] [i_2] [i_2] [i_2]) >= var_1))))))))));
                                arr_19 [i_2] = ((2921493654 ? 195516547 : (((2041595920913249684 ? 21029 : -27)))));
                            }
                        }
                    }
                    arr_20 [i_2] [i_3] [i_2] [i_2] = (((((122 ? (!var_4) : 117))) ? ((((min(var_10, var_14)) >= var_17))) : var_16));
                }
            }
        }
    }
    #pragma endscop
}
