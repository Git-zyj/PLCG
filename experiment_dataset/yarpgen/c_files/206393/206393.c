/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((~var_11) ? ((max(var_12, var_2))) : (((var_9 + var_6) ? var_9 : var_8)))))));
    var_19 = 3725378128;
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (arr_8 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = (arr_0 [i_2] [i_2]);
                                var_23 = (max(var_23, (((-1 ? 18446744073709551611 : 1907717135744157852)))));
                                var_24 = (min(((~(arr_3 [i_4]))), ((min(((max((arr_10 [i_0] [17] [i_1] [i_2] [i_3] [17]), (arr_10 [i_0] [i_0] [i_4] [i_3] [i_1] [i_3])))), (arr_14 [i_4] [i_3] [i_0] [i_1] [i_0]))))));
                            }
                        }
                    }
                    var_25 = ((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]) ? ((14 ? 1907717135744157842 : 1907717135744157842)) : (max(((var_9 ? var_16 : var_8)), ((((arr_5 [i_0] [i_0]) != (arr_12 [i_2] [9])))))));
                    var_26 += ((min(((-(arr_7 [i_0]))), ((((arr_8 [i_1]) > var_2))))));
                }
            }
        }
    }
    #pragma endscop
}
