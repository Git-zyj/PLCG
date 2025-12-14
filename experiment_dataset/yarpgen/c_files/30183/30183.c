/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((~((27 ? 1380979189 : -2964119220324033706))));
                arr_7 [i_0] [i_1] = ((2519118646 ? ((57 ? var_8 : ((var_19 ? var_5 : var_3)))) : (!0)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = -25165824;
                                var_21 = ((((min(var_14, ((var_5 ? 2519118650 : var_14))))) ? ((-(min(var_1, var_16)))) : var_18));
                                var_22 &= (min(2519118650, 25165816));
                                var_23 = ((((((max(1, var_8)) << var_18))) ? ((var_6 ? var_6 : var_5)) : (max(var_17, var_4))));
                            }
                        }
                    }
                }
                var_24 -= min(((((((var_5 ? var_9 : var_19))) ? 121 : ((2519118646 ? 8 : 41349))))), (max(var_14, (var_13 - var_12))));
                var_25 = (((((var_18 ? var_9 : 2519118650))) ? (max(((var_4 ? 1775848661 : var_17)), var_12)) : ((max(var_17, (~8))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                var_26 = (((min(var_7, ((19011 ? var_8 : var_8))))) ? ((((var_18 >= var_16) << 1))) : ((-(max(var_11, var_17)))));
                var_27 = max((((((min(1775848668, 0))) ? ((max(var_9, var_19))) : var_16))), ((2519118625 ? 132 : 2519118645)));
                var_28 = (min(((1775848644 ? 75 : 1775848661)), (((var_8 != 1775848645) ? (min(25165824, var_14)) : var_7))));
            }
        }
    }
    #pragma endscop
}
