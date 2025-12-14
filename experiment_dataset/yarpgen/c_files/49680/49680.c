/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-2108423072 ? (((2539360000 * var_2) ? ((var_7 ? 1 : 2881245299)) : var_8)) : 1413721996));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((((var_7 ? (11640835356616718712 & 12667083800304114473) : (~2881245299))) & 1945643523));
                    var_15 -= ((!(((4030717367 ? var_6 : var_7)))));
                    var_16 = (((~var_8) < ((var_1 ? 0 : ((var_1 ? 0 : var_9))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = var_1;
                                var_18 = var_8;
                                var_19 = (((2344201882 & 1413721996) >> ((((var_10 ? 2881245299 : 4294967295)) - 2881245268))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
