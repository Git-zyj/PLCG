/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 56933;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((0 ? (arr_5 [i_1] [i_0]) : ((-8 ? (-32767 - 1) : (arr_0 [i_0])))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (arr_6 [i_2] [i_0] [i_2] [7]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (max((((0 ? -65 : -51))), var_6));
                                var_17 |= (((2556148185 ? (arr_10 [i_2] [i_1] [8]) : (arr_11 [2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
