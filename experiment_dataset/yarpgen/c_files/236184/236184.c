/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(var_7 / var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 1] |= (min((1114600119 * 1114600111), ((((arr_4 [i_0 - 3] [i_0 + 2] [i_0 + 1]) - (arr_4 [i_0 + 2] [i_0] [i_0 - 3]))))));
                arr_6 [i_0] [i_1] = (arr_2 [i_0 + 1]);
            }
        }
    }
    var_16 &= -var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                arr_13 [i_3] = arr_0 [i_2];
                arr_14 [i_2] [i_2] [i_3] = ((((4 == ((max(1114600119, (arr_11 [i_2]))))))));
                arr_15 [i_3 + 1] [i_3] = (((((-var_12 ? var_1 : (min(var_8, var_9))))) ? (min(((var_12 ? -5814473232339461628 : (arr_3 [i_2] [i_3 - 1]))), (((3180367171 ? 25346 : var_5))))) : var_12));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 ^= var_12;
                                var_18 ^= (((~(arr_4 [i_2] [i_3 - 1] [i_3 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (~12);
    #pragma endscop
}
