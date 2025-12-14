/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max(var_2, ((((1 * var_6) * var_5)))));
    var_17 = (((!var_12) * (((!((max(var_4, 18446744073709551614))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((~((~(max(10, (arr_4 [i_0] [i_1])))))));
                arr_6 [i_0] [i_0] [i_1] = arr_0 [i_0 + 1];

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 -= 1;
                    arr_10 [7] [i_0] [7] [7] = (min(6772424424968265481, 20));
                    arr_11 [3] &= (arr_5 [i_1] [i_1]);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_16 [i_0] [i_0] = (arr_8 [4] [i_0 - 1]);
                    var_20 -= (arr_3 [i_0 + 1]);
                    var_21 -= (min(1, 1));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 &= (max((min(18446744073709551614, (-32767 - 1))), 0));
                                arr_21 [i_0] [i_3] [i_0] [0] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
