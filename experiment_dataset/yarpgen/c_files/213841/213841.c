/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (min(((min(1, var_18))), (max(39345, 8796093022144))));
                                arr_16 [i_4] [i_3] [i_3] [i_1] [i_0] = ((var_17 ? ((((var_2 ? 1 : var_9)) * (arr_2 [i_0] [i_1] [i_1 - 1]))) : 1));
                                var_21 ^= ((!(~var_2)));
                                var_22 = ((-(((~(arr_8 [i_0] [i_0] [i_0] [i_3] [i_0]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            {
                                arr_23 [0] [i_5] = (arr_3 [i_1] [i_1] [i_6]);
                                var_23 = ((((~(arr_18 [i_6 - 1] [i_1] [i_6] [i_5] [i_1 + 1])))) != (arr_18 [i_6 + 1] [i_1] [i_6] [i_6] [i_1 + 1]));
                                arr_24 [i_6 + 2] [1] [i_5] [i_5] [i_1 - 1] [i_0] = (((((26 ? 104 : 1))) ? 1 : ((~((max(1, 1)))))));
                            }
                        }
                    }
                    var_24 = 0;
                    arr_25 [i_2] [i_2] [i_2] [i_2] = ((((11 ? 0 : ((var_18 ? -10 : 1))))) ? (arr_14 [i_2] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1]) : (((arr_20 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] [i_1 - 1] [i_0]) ? (arr_0 [i_0] [i_1 - 1]) : (arr_20 [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_2] [i_1] [i_1]))));
                }
            }
        }
        var_25 = (max(var_25, ((((((arr_6 [i_0]) != (arr_21 [i_0]))))))));
    }
    var_26 = ((-(max(((max(var_13, var_12))), var_8))));
    #pragma endscop
}
