/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((!(-125 + var_4))) || ((((var_0 == -19) ? (var_1 | 216450005) : var_1)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 *= (((((((!(arr_2 [i_0] [i_0])))) + (((!(arr_1 [16])))))) << ((((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0]))))));
        var_16 = (((((((min(4294967283, var_7))) ? ((min((arr_0 [i_0] [i_0]), (arr_1 [1])))) : (((arr_2 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))))) + (((arr_1 [i_0]) ? (arr_1 [i_0]) : (min((arr_2 [i_0] [i_0]), var_9))))));
        var_17 = (((!(((~(arr_1 [i_0])))))) ? ((((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) ? 11004999528417091858 : 1)) : var_12)) : ((max((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (((var_9 << (((((arr_5 [i_1] [i_2]) ? (arr_3 [i_2] [i_1] [i_0]) : (arr_4 [i_2] [i_1]))) - 5700669172910787357)))) - (arr_6 [i_2] [13] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 *= (max((arr_8 [1] [i_1] [i_1] [i_1] [i_1]), (arr_8 [i_0] [i_1] [13] [i_0] [i_4])));
                                arr_14 [i_3] &= ((((max(((((arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_13 [i_0] [i_1] [i_2] [i_2] [i_4 - 1]) : (arr_7 [i_4] [i_4] [i_4 - 1] [i_4] [i_4])))), -4546763858597187530))) ? ((((((arr_5 [i_0] [i_0]) ? (arr_2 [i_3] [i_4]) : 1))) ? (((arr_10 [i_2] [i_2] [i_1] [i_1] [i_3] [18]) ? (arr_5 [i_1] [i_1]) : (arr_4 [i_1] [i_3]))) : (((max((arr_1 [i_0]), (arr_8 [i_3] [i_3] [i_2] [i_0] [i_0]))))))) : (!1)));
                                arr_15 [1] [i_4] [i_4] = (arr_5 [i_2] [i_0]);
                            }
                        }
                    }
                    var_20 = (min(var_20, (~-2266)));
                    var_21 = ((-2413617085947026252 ? (((((max((arr_1 [17]), (arr_10 [i_2] [i_2] [i_1] [i_0] [10] [i_2])))) == 1))) : (((((((arr_13 [i_2] [i_2] [i_2] [i_2] [i_0]) == (arr_12 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0])))) <= (((4294967294 || (arr_10 [i_2] [i_2] [8] [i_1] [8] [i_2])))))))));
                    var_22 = ((((-(arr_6 [i_0] [i_0] [i_0]))) + ((6120410939152727849 ? (arr_5 [i_2] [i_1]) : (arr_5 [i_2] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
