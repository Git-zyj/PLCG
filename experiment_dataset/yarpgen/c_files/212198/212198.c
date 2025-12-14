/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_11 ^= (min((var_4 - var_7), (((arr_1 [i_1 - 2]) ? var_0 : (arr_2 [i_1 + 2])))));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_2] = ((~(var_10 || var_3)));
                    arr_9 [1] [i_1] [i_1] [i_1 + 1] = (var_6 == var_7);
                    var_12 = var_6;
                    arr_10 [i_0] [i_1 + 1] = (((arr_5 [i_2 - 1] [i_1 - 2] [i_1 + 2] [i_2 + 2]) | (arr_0 [i_1] [i_1 + 3])));
                }
                arr_11 [i_0] = (max(9420, 6898433033615547066));
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_21 [i_4] [i_1] [i_3] [i_3] [i_1] [9] [i_0] = ((((((max(var_1, (arr_19 [i_3])))) ? var_3 : (max(var_0, 1692138199309936630)))) == var_1));
                                var_13 = ((!(((var_5 ? (var_1 - var_2) : var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, ((max(((var_4 ? var_6 : var_2)), (((var_0 + var_9) ? (min(var_8, -339054158)) : var_9)))))));

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_25 [i_6] = (((arr_16 [i_6] [i_6] [i_6] [i_6] [i_6]) == (!var_10)));
        arr_26 [i_6] = var_3;
    }
    #pragma endscop
}
