/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_12 = (arr_0 [i_1 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = -9223372036854775799;
                                var_14 = 1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_15 &= (max((~var_8), (max((((arr_15 [13] [8]) ? var_4 : (arr_1 [i_1] [i_1]))), (((1895 ? 288229276640083968 : 972337354)))))));
                                var_16 = 24;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_17 = (max(var_17, (arr_24 [i_0] [i_2 + 1] [i_7])));
                                var_18 |= (min(((max(var_0, (arr_4 [i_1] [i_1 + 3] [i_2 + 1])))), (min(((var_8 ? 67 : var_9)), ((((arr_23 [i_0] [i_0] [i_2 + 1] [i_8] [i_8]) + (arr_15 [i_8] [i_1 - 1]))))))));
                                var_19 = (min(var_19, var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 += ((var_8 >= (min((31 % var_0), -var_1))));
    var_21 = (~(var_8 | var_0));
    #pragma endscop
}
