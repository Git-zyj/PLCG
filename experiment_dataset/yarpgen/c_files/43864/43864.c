/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((((min(var_9, -0)) >= (((((arr_0 [i_0]) ? (arr_5 [i_2] [i_1] [i_1] [i_0]) : (arr_0 [i_0]))))))))));
                    var_19 = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (arr_7 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] [13]);
                                var_21 = (max(var_21, (!2766571970)));
                                var_22 = (!var_9);
                                var_23 = ((((var_3 & (arr_8 [i_4] [i_3] [i_1] [i_1] [i_0]))) >> (21750 - 21745)));
                            }
                        }
                    }
                    var_24 = (((arr_4 [0] [0] [i_2] [0]) + (((((max((arr_3 [i_2] [i_0]), var_5))) << var_2)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_17 [i_5 - 2] [i_6] [i_5] [i_6] = (~(((((var_2 ? 1528395312 : 2766571970)) <= (arr_15 [i_5] [i_7] [i_7] [i_6])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_25 |= (arr_22 [i_5] [i_5] [i_5]);
                                var_26 += (arr_12 [i_5 - 2]);
                                var_27 &= (var_13 >> ((((var_10 ? var_1 : (1654424772 * 1528395323))) - 18446744073709545167)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 &= (max(((var_15 ? (((-2147483647 - 1) ? var_6 : -212)) : (250 && -64))), var_11));
    #pragma endscop
}
