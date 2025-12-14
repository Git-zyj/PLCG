/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 -= min(((((((32754 ? 15467371272482793773 : (arr_10 [i_0] [i_1])))) ? 15467371272482793753 : 2096640))), 2979372801226757856);
                                var_14 = (max(var_14, ((((2979372801226757879 ? 2509011961968502094 : ((2979372801226757843 ? 15467371272482793772 : var_3))))))));
                            }
                        }
                    }
                    var_15 ^= 2004855183;
                    var_16 |= (arr_13 [2] [i_1] [i_1] [i_2] [i_2]);

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [i_1] = ((2979372801226757842 & ((((!(arr_16 [i_0] [i_0 + 1] [i_0] [i_0 + 1])))))));
                        var_17 = ((15467371272482793743 ? (min((0 == 1), (~2979372801226757879))) : ((-11578 ? ((((arr_7 [i_5] [i_0] [i_1] [i_0]) >> var_2))) : ((var_3 ? var_8 : 2979372801226757844))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_23 [i_1] |= (((var_7 ? var_9 : 63)));
                            arr_24 [i_0 + 1] [i_1] [i_2] [i_7] [1] = ((arr_16 [i_0 + 1] [i_0 + 1] [i_2] [i_6 - 1]) ? 15467371272482793737 : var_4);
                        }

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_18 = (((3919229220 | (arr_21 [i_0] [12] [i_2] [i_6] [i_8]))));
                            var_19 = ((var_11 ? (arr_14 [i_0] [i_0 + 1] [5] [i_6 + 2] [i_8] [i_6 + 2]) : (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6 + 1] [i_8] [i_8])));
                            var_20 = ((2979372801226757836 ? var_4 : var_5));
                        }
                    }
                }
            }
        }
    }
    var_21 = min((((var_8 ? ((min(1, -20129))) : (-8 > var_0)))), (min((min(var_1, 2290112113)), -0)));
    var_22 = (var_0 >> var_2);
    #pragma endscop
}
