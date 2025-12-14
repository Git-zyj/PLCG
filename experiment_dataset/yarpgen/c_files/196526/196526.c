/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((2954393880922547245 ? (!var_7) : 183));
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [5] [i_1] [i_1] [i_1] [i_4] [i_4] [i_4] = ((var_7 ? (arr_9 [i_0] [i_2] [i_3] [i_4]) : ((~((61 ? (arr_4 [i_1] [i_2 + 1]) : var_9))))));
                                var_14 = 15492350192787004370;
                                var_15 = var_0;
                                var_16 = (max(((max(var_3, (arr_9 [i_3] [i_3] [i_2 - 2] [i_1])))), (max(((17651300753343519307 ? var_6 : var_0)), (arr_8 [i_1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
