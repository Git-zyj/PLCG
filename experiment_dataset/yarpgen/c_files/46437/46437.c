/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_10;
    var_12 = var_10;
    var_13 = (min(-var_4, ((-((1045761726 ? -20 : 219927225663554591))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [16] = (!14984323371076394);
                var_14 -= ((!(-9223372036854775807 - 1)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (((min((arr_14 [i_1 - 4] [i_1 - 3] [i_3 - 2] [i_1 - 4] [i_3 - 1]), (arr_14 [i_1 + 1] [i_1 + 2] [i_3 + 1] [5] [i_3 - 1])))) || ((!(arr_14 [i_1 + 3] [i_1 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] |= ((+(((arr_8 [14] [i_1 - 2] [i_3 - 2]) ? (arr_8 [16] [i_1 - 2] [i_3 - 2]) : (arr_8 [1] [i_1 - 2] [i_3 - 2])))));
                                arr_16 [11] [11] [7] [i_3] [i_3] = ((((max(var_10, (arr_0 [i_1 - 3]))))) >= (min((min(var_6, (arr_5 [i_1] [i_1] [16] [i_4]))), (((var_8 ? (arr_10 [i_0] [i_1] [i_1] [14] [i_0]) : var_7))))));
                                var_16 = (-4394538297752271743 < 12);
                            }
                        }
                    }
                }
                arr_17 [i_0] [12] [i_1] = ((((((min(65531, var_6))) ? ((-1353770460432455029 ? 1353770460432455010 : 4294967295)) : (arr_6 [i_1] [15] [i_1 - 4]))) >= var_0));
            }
        }
    }
    #pragma endscop
}
