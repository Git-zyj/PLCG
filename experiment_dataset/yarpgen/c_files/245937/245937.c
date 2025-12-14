/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_8 || ((!(((var_11 ? var_3 : var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = var_6;
                                var_18 = ((((((arr_6 [i_0] [i_3] [i_4 + 1]) * (arr_7 [i_2 - 2] [i_2 - 4] [i_2 - 1] [i_2 - 4])))) ? (max((arr_12 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_2 - 1]), ((3621115066759023331 ? var_0 : 5387554730946980935)))) : (+-5387554730946980952)));
                            }
                        }
                    }
                    var_19 = (max(((206 ? 206 : (arr_8 [i_2 - 2] [i_1] [i_0] [i_0] [i_0]))), -var_10));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                arr_18 [i_5] [i_5] = (arr_17 [i_5] [i_6]);
                var_20 = (min(var_20, 5096));
            }
        }
    }
    #pragma endscop
}
