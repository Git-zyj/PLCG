/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_3] [i_3] = 17273495940891851732;

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_17 = (max(var_17, var_6));
                                var_18 ^= max((((arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_3 + 1] [i_3 - 1]) ? 1410899869 : (arr_10 [i_0] [i_0 + 1] [i_0] [i_3 + 1] [i_3 + 1] [i_3 + 1]))), ((((arr_10 [i_0] [i_0 + 1] [12] [i_3] [i_3 - 1] [i_3 - 1]) % (arr_10 [i_0] [i_0 + 1] [i_0] [i_1] [i_3 - 1] [i_3 - 1])))));
                            }
                        }
                    }
                }
                var_19 = (max(((((arr_11 [i_0 + 1] [i_0] [i_0] [3]) < (arr_1 [i_0 + 1])))), (arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])));
                var_20 = (max(var_20, ((max((((1410899868 != (~var_1)))), (max(var_14, (arr_11 [i_0 + 1] [i_1] [i_1] [i_1]))))))));
                arr_15 [i_0] [i_0 + 1] [i_0 + 1] = (max((~var_5), (arr_0 [9])));

                /* vectorizable */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    var_21 = (max(var_21, (~var_1)));
                    var_22 = (((!var_6) ? (~24) : ((var_8 ? var_1 : var_16))));
                    arr_20 [i_0] [i_5] [i_0] = (((arr_2 [i_5 + 1]) > (((arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]) ? var_8 : var_11))));
                }
            }
        }
    }
    var_23 = ((~(max(var_3, ((1 ? var_16 : var_14))))));
    var_24 = (max(var_24, ((((((var_6 ? (var_12 >= 23511) : (min(262140, var_12))))) ? ((~(~var_0))) : 1073741823)))));
    var_25 = ((var_2 ? ((3968 ? 3695958140 : 65508)) : (max(((min(var_15, 36))), (max(1486607224, var_6))))));
    #pragma endscop
}
