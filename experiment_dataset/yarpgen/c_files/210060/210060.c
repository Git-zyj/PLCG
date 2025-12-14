/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 &= (arr_5 [i_0]);
                                var_13 ^= max(((31 ? (arr_11 [i_0]) : 1019113944)), (arr_11 [i_4]));
                                var_14 = (min(var_14, var_11));
                                var_15 = arr_14 [8] [1] [i_2] [i_3] [i_4];
                                var_16 ^= (arr_13 [1] [i_1] [i_3 - 2] [i_3] [i_4 - 1] [1]);
                            }
                        }
                    }
                    var_17 = (min(var_17, ((max((arr_0 [i_1]), (max((max((arr_2 [5]), (arr_8 [i_0] [i_0] [i_1] [i_2]))), (arr_11 [i_0]))))))));
                    var_18 = (max(var_18, ((((arr_7 [i_0] [i_1]) - (((!(~-31)))))))));
                    var_19 = (min(var_19, ((((arr_2 [i_1]) ? (arr_6 [i_2] [8] [i_1] [11]) : (~-1))))));
                }
            }
        }
    }
    var_20 &= (max((max(var_3, (var_9 + var_11))), 1));
    #pragma endscop
}
