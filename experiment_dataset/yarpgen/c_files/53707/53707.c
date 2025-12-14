/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [14] [i_3] [i_4] [14] [i_4 - 1] = max((-122 & -6490384286858319552), (min(((min(var_4, (arr_6 [i_0] [i_1] [i_2 - 2])))), (arr_5 [i_2 + 3] [i_3] [i_4] [i_0]))));
                                var_16 = ((((((arr_4 [i_0] [i_1] [i_2 + 2]) ? (arr_2 [i_4 + 1] [i_0 - 1]) : (arr_2 [i_4 + 2] [i_0 + 1])))) && ((((arr_2 [i_4 - 1] [i_0 - 1]) ? (arr_2 [i_4 + 2] [i_0 + 1]) : (arr_2 [i_4 - 1] [i_0 - 1]))))));
                                var_17 *= ((32750 && ((!(arr_9 [i_0] [i_1] [i_1] [i_4 + 2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = (((arr_18 [i_0] [i_5] [i_0 - 1]) / (min(-7624940959573293661, 7624940959573293634))));
                                arr_19 [i_0] [1] [1] [1] [i_0] [i_0] = (((arr_18 [4] [i_2 + 3] [4]) ? (((min((min(var_13, var_14)), var_2)))) : ((((((arr_6 [i_0] [i_1] [i_2]) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_2] [i_5]) : (arr_18 [i_2 + 1] [i_2 + 1] [1])))) & ((var_4 ? (arr_15 [i_0] [6] [i_2] [i_5] [i_6]) : (arr_11 [i_6] [i_0] [i_0])))))));
                                var_19 = (max(var_19, (((((min((arr_9 [i_1] [i_1] [i_1 + 3] [i_1]), (arr_7 [i_0] [i_1] [i_0 + 1] [i_2 - 2] [i_6 - 1])))) ? (min((-7624940959573293681 == 30), var_1)) : (((min(32765, -32765)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= (min(var_10, var_0));
    var_21 = ((((min(var_8, (var_2 > var_10))) + 9223372036854775807)) >> (var_10 - 44615));
    #pragma endscop
}
