/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_10 = (min(((((min(-29264, 1))) ? ((min(var_3, 2489847169))) : var_6)), ((min(3336281695, var_1)))));
                                var_11 = (max((max(((max(var_0, -94))), 9223372036854775785)), ((((127 ? var_5 : var_0))))));
                                var_12 *= (max(var_6, 60345));
                                var_13 = (max((min(var_4, ((21096 ? var_4 : 958685588)))), 524287));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_14 = 1805120124;
                                var_15 = (min(var_15, (((min(29264, 1805120127))))));
                                var_16 = var_6;
                                var_17 = (max(var_7, (min(var_5, var_5))));
                            }
                        }
                    }
                    var_18 = (((max(15, 1))) ? (max(((var_8 ? -838192572 : -3908106009047039143)), ((min(-124, 0))))) : (((max(var_3, 117)))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_19 = (min((((4294443008 ? var_6 : 1805120118))), (min((max(1, var_6)), (((255 ? -3908106009047039143 : 806660218)))))));
                                var_20 |= ((-13097 ? var_7 : -var_0));
                                var_21 &= (max(3725907510636415144, var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((-18446744073709551610 ? ((min((!-3908106009047039143), -117))) : var_0));
    var_23 = (max(((max(((max(var_0, var_7))), ((0 ? var_2 : 3166617780))))), (min(806660216, ((255 ? var_6 : var_0))))));
    var_24 = ((-(min(((max(var_5, 3488307078))), var_6))));
    #pragma endscop
}
