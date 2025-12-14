/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 ^ var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_14 = ((max(98, (arr_6 [i_0] [i_2]))) | (((min((arr_4 [3] [i_1] [i_0]), (114 <= var_9))))));
                    var_15 = ((!((!(arr_3 [i_2] [i_2 - 1] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (arr_4 [i_2 + 1] [i_2 + 1] [i_4 + 1]);
                                var_17 = (min((arr_11 [i_2] [i_2] [i_2] [i_2] [10] [i_2]), var_2));
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_18 = (min((arr_12 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1]), (113 || 85)));
                    var_19 = ((((max(-1, 1)) & 111)));
                }
                var_20 = (((max(var_0, (((~(arr_2 [i_0] [i_0] [1])))))) + 56));
                var_21 = (max(var_21, (((+((((((arr_15 [4] [i_1] [i_0]) ? 3053758145 : 826779243))) ? (arr_11 [i_0] [2] [i_0] [i_0] [i_0] [i_1]) : (arr_15 [1] [i_1] [i_1]))))))));
                var_22 = (max(57, 27634));
            }
        }
    }
    #pragma endscop
}
