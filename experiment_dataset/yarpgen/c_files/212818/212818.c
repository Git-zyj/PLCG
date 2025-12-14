/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_12;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_19 = (((((1 ? -6500653571951512637 : ((((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))) ? ((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])))) : -6500653571951512654));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (((((703437553174638850 ? (((max(var_7, (arr_5 [i_0] [i_0] [1] [i_1]))))) : ((var_8 ? (arr_1 [i_0]) : 6500653571951512605))))) ? (((((max(var_1, -3144684025360202466))) ? (arr_5 [i_0 + 1] [i_0] [i_0 + 1] [i_1]) : var_4))) : (((var_6 < 847992083) ? ((((arr_6 [i_0] [i_1] [3]) ? 505343979 : (arr_5 [i_0] [i_0] [i_2] [i_2])))) : (var_1 & 18052)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [4] [i_2] [i_2] |= var_17;
                                var_21 = (max((max((arr_5 [i_4] [i_0] [i_0] [0]), (arr_5 [i_0] [i_0] [i_1] [i_3 + 1]))), ((+((-6500653571951512620 ? (arr_8 [i_4] [i_3] [i_0] [i_2] [i_1 - 3] [i_0]) : (arr_6 [i_0] [i_3] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_22 = (((arr_6 [i_5] [i_5] [i_5]) & (max((((var_11 ? (-32767 - 1) : (arr_13 [i_5] [i_5 + 2])))), var_14))));
        var_23 = ((((((1513899897 ? (arr_6 [i_5] [i_5 + 1] [i_5]) : (arr_2 [i_5]))))) ? ((((((arr_2 [i_5]) % (-32767 - 1)))) ? (max((arr_8 [i_5] [i_5] [i_5] [i_5] [10] [i_5]), var_9)) : (((!(arr_8 [i_5] [i_5] [i_5 - 2] [14] [i_5 + 2] [i_5])))))) : (((((((arr_8 [11] [i_5 + 2] [11] [i_5] [i_5 + 1] [i_5 + 1]) ? (arr_5 [11] [i_5] [i_5] [i_5]) : var_13))) >= (max((arr_6 [i_5] [i_5 + 2] [i_5 + 2]), (arr_8 [1] [1] [i_5] [i_5] [i_5] [i_5 - 1]))))))));
        var_24 -= (max(((((((var_14 != (arr_2 [i_5])))) * (((!(arr_3 [i_5] [i_5 + 2]))))))), var_2));
    }
    #pragma endscop
}
