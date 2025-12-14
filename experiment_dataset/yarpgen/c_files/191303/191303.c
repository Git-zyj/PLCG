/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [i_2] [i_1] [i_4] = (+((var_10 ? (arr_8 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2]) : -12)));
                                arr_12 [i_1] [i_1] = var_4;
                                var_12 = 10;
                                var_13 = ((~(((!(var_10 || var_8))))));
                                var_14 ^= (((-12 ? 4 : -12)));
                            }
                        }
                    }
                    var_15 = (((max((arr_1 [i_1 + 2] [i_1 + 2]), (arr_1 [i_1 + 3] [i_1 + 1])))) ? (((11 < (arr_1 [i_1 + 1] [i_1 + 1])))) : ((((arr_1 [i_1 - 1] [i_1 + 3]) || (arr_1 [i_1 + 1] [i_1 + 3])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_16 = var_4;
                                arr_17 [i_0] [i_0] [i_2] [i_5] [i_1] = -36;
                                var_17 = (max(((max(32760, -12))), ((~(min(-32760, var_0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((8437708635340646360 || (((var_1 % ((937134835 ? var_7 : var_4)))))));
    #pragma endscop
}
