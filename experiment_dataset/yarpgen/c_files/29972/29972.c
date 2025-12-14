/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [2] [i_0] [i_3] [i_4 + 1] [i_0] = (arr_13 [5] [7] [5] [i_3]);
                                arr_15 [i_0] [i_1 + 2] [i_0] [i_3] [i_1 + 2] [i_2] [i_4] = var_5;
                            }
                        }
                    }
                    var_17 = -8103198424636115753;
                    arr_16 [i_0] [i_0] [i_2] = ((((max(var_7, var_3))) >= (((arr_2 [i_1 + 1] [i_1 + 1]) ? var_6 : (arr_2 [1] [i_1 + 2])))));
                    var_18 = (((min(var_13, 1687376093)) < var_12));
                }
            }
        }
    }
    var_19 = (max(var_19, (((((max(var_4, 127))) * (((((18446744073709551604 ? var_2 : 1))))))))));
    #pragma endscop
}
