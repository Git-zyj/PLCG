/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((var_3 - (((-9223372036854775807 - 1) ? 1 : 65535))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] |= (((((8407288228759248024 ? 47 : 8151070304838135520))) ? (((arr_9 [i_1 + 2]) / (arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1]))) : (((arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (arr_9 [i_1 + 2]) : (arr_5 [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
                                arr_14 [i_0] [i_1 - 1] [i_0] [8] [i_3] [i_3] [11] = (((max((arr_12 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1]), -8407288228759248025)) / ((max((((arr_6 [i_0] [11] [i_3] [i_4]) ? var_3 : (arr_7 [i_0]))), ((~(arr_3 [12] [i_1 - 2] [i_1]))))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_17 [i_1] [i_1] [13] = (((arr_12 [i_0] [12] [i_0] [i_0]) ? (~113) : (min(1, -694708150344532606))));
                    var_13 = (arr_8 [i_0]);
                    var_14 = (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]);
                    var_15 *= (min(8473, 33));
                    var_16 ^= ((((((max((arr_8 [i_5]), (arr_8 [i_1])))) ? (max((arr_16 [5] [5] [i_1] [i_1]), -1024)) : (arr_3 [i_0] [12] [i_0]))) & ((((var_2 < (!57060)))))));
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_17 = ((!(((((694708150344532606 ? 1 : 15698666163776839921)) & (((min(1, 255)))))))));
                    var_18 = (arr_0 [i_0]);
                    var_19 += (((~var_8) ? (((~((((arr_8 [i_0]) >= 98)))))) : (((arr_16 [i_6 + 2] [i_1 - 1] [3] [i_0]) ? (arr_16 [i_6 + 3] [i_1 - 2] [i_1] [i_0]) : 1))));
                }
                var_20 |= ((~(((((arr_19 [i_0] [i_0] [i_0]) ? var_6 : -8010168198923982338))))));
            }
        }
    }
    var_21 = ((((-((var_8 >> (var_7 - 57984))))) >> (var_4 - 85955507129686258)));
    #pragma endscop
}
