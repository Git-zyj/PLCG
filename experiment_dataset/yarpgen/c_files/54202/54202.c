/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((((((var_9 ? (arr_0 [i_1]) : (arr_1 [i_0] [i_1])))) ? (((((arr_1 [i_0] [i_0]) && var_6)))) : (max((arr_3 [i_0] [i_0] [i_0]), (arr_2 [5] [i_1] [17]))))) < ((((max(-111, 937896861)) ^ (((min(var_1, (arr_1 [15] [i_1])))))))))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_15 = ((((max((110 == 111), (((arr_4 [i_0]) ? -110 : 4503599627354112))))) ? ((max(((var_12 ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : (arr_5 [i_0] [i_0] [i_1] [i_0]))), (((arr_6 [i_1]) | var_2))))) : (((arr_6 [i_1]) * (min((arr_3 [i_0] [18] [i_0]), var_11))))));
                    arr_7 [i_1] = (min(((((max((arr_4 [i_1]), (arr_2 [i_2] [i_2] [i_2])))) ? ((1048448 ? -20759 : 3494652109)) : (arr_2 [i_0] [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
                    arr_8 [i_0] [i_1] [i_2] = (((arr_3 [i_0] [3] [i_2]) << (((((((-4503599627354113 ? -111 : 109))) ? (((max((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_2] [i_2]))))) : (((arr_3 [i_0] [i_0] [i_2]) ^ var_9)))) - 62))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    var_16 = (max(var_16, ((((((arr_11 [i_0]) % (arr_4 [i_1]))) ^ (arr_5 [12] [i_1] [i_0] [12]))))));
                    var_17 = (arr_9 [i_3 - 1]);

                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_18 += (arr_1 [i_0] [i_0]);
                        arr_16 [i_0] [i_1] [15] = ((-109 ? 11924582046496157312 : 3357070435));
                    }
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_5] = (((-20759 - 65535) ? (arr_2 [i_3 + 2] [1] [i_3]) : ((((arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_18 [i_0] [i_1] [i_1] [i_1] [i_1]))))));
                        arr_20 [i_0] [3] [i_0] [i_1] [i_5 - 4] = arr_3 [i_0] [i_1] [i_5];
                    }
                    var_19 = var_5;
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    arr_24 [i_0] [i_1] [i_1] = ((9007199254740991 ? 74 : 12853507728157554779));
                    var_20 = (((arr_18 [i_0] [i_0] [i_0] [i_1] [i_0]) ? ((((((arr_14 [i_0] [i_0] [i_6] [i_0] [i_1]) - (arr_18 [i_6] [i_1] [i_6 + 1] [i_1] [i_6]))) / (arr_11 [i_0])))) : (((arr_17 [i_0] [i_1] [i_0]) | (arr_3 [i_0] [i_1] [i_6])))));
                    var_21 = ((-24 ? 12853507728157554779 : 17));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {

                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_1] = ((arr_30 [i_8] [i_1] [i_8 - 2]) ? var_9 : ((var_9 ? 937896861 : 65535)));
                        var_22 = var_7;
                        var_23 = (min(var_23, 65535));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_24 = (min(var_24, (arr_17 [i_0] [i_1] [i_0])));
                                var_25 += (((arr_21 [i_1] [i_9 + 1] [i_9 - 3]) ? (8894454246280284195 > -106) : (((arr_29 [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0] [9]) : (arr_4 [i_0])))));
                                var_26 = (max(var_26, (((20758 ? 127 : 36028797018439680)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (min(var_27, (((var_13 >> (var_1 > var_12))))));
    #pragma endscop
}
