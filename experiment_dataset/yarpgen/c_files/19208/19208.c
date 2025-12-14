/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_13 = ((-(((arr_9 [i_0]) - (arr_5 [i_0] [i_1] [i_2] [i_1])))));
                        var_14 = (min(var_14, (max((((arr_5 [22] [i_1] [i_2 + 1] [i_3 + 1]) ^ -553685441469875182)), ((((arr_5 [10] [i_2 + 1] [i_3 + 1] [i_3]) ? 170 : (arr_5 [2] [i_1] [i_1] [0]))))))));
                        var_15 = (min(var_2, var_6));
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        var_16 += (((var_7 << var_2) ? ((((min(235, (arr_6 [i_4] [22])))) ? (arr_6 [i_4] [i_4 + 1]) : (arr_0 [i_4]))) : (((((arr_2 [i_1] [i_4] [i_1]) != (((-(arr_10 [6] [i_4] [i_4 + 1]))))))))));
                        var_17 = ((((!(arr_4 [i_0] [i_1]))) ? (((var_8 ? ((var_1 ? 217 : 553685441469875181)) : (min((arr_3 [16] [i_1] [i_0]), 553685441469875181))))) : (max((~2274462002468487377), (arr_2 [i_0] [i_0] [6])))));
                        var_18 = ((!((max(var_6, (arr_4 [i_0] [i_2]))))));
                        var_19 = var_10;
                    }
                    var_20 = min((arr_3 [i_0 + 1] [i_0] [i_0]), (max((arr_0 [i_0]), var_0)));
                }
            }
        }
    }
    var_21 ^= (!var_2);
    #pragma endscop
}
