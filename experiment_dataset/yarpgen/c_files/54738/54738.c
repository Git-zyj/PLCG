/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (max(var_18, ((((min(25468, var_13))) ? (((max(var_0, var_2)))) : (min(187568015085201224, 47))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = -96;
                                var_20 = var_5;
                                arr_15 [i_1] [i_1] [i_1] = (max(((((4294967283 != var_10) < (max(var_13, -96))))), (((((max(31474, var_2)))) & ((var_4 ? var_12 : var_9))))));
                                var_21 = (26121 ? (min(var_11, -1140048691)) : ((((min(65527, var_16))) ? var_16 : ((max(var_18, 9111))))));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] = (max(((2584492208 ? 1 : ((var_6 ? 95 : var_13)))), 28792));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] = var_16;
                                var_22 = min(236, (15 + var_2));
                                arr_22 [i_1] [i_1] [i_1] [i_1] = ((var_9 && (((((min(28, var_18))) ? (((max(57447, 17)))) : (min(var_13, 2197562894)))))));
                            }
                        }
                    }
                    var_23 = ((((min(var_17, -38))) - (10 << 1)));
                }
            }
        }
    }
    var_24 = (min(((min(((var_16 ? var_18 : 1)), ((min(var_7, -122)))))), ((var_17 ? var_8 : (-2785821097687008290 | 1729382256910270464)))));
    var_25 = (max(116, 1));
    #pragma endscop
}
