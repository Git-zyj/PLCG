/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 ^= (max(var_3, ((((max(var_8, var_8)) ? var_5 : (var_10 >= var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_2] = ((~(((max((arr_5 [i_2] [i_1] [i_0]), (arr_4 [i_2] [i_1] [i_0]))) | (arr_1 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (~0);
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = (!26580);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_6] [i_2] = ((((max(28034, (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6])))) ? (!3725509284) : (min((arr_17 [i_2] [i_1 + 1] [i_2] [i_5] [i_6] [i_6]), 26580))));
                                var_19 = (((-((3440070208989307693 + (arr_10 [i_5] [i_6] [i_6] [i_5] [i_6]))))));
                                var_20 = (min((!0), -268419072));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
