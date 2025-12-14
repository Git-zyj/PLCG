/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 *= ((~(max(410806700, -410806697))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [14] [i_1] [i_1] [i_3] [i_0] = ((((((((arr_8 [i_1] [1]) ? (arr_12 [i_0] [i_0] [i_0] [1]) : (arr_1 [i_0])))) ? (max((arr_3 [i_0] [i_0]), (arr_0 [i_0]))) : (((~(arr_11 [i_0] [i_2])))))) * ((min((arr_10 [i_0] [i_1] [i_0] [i_0] [i_1] [i_4]), ((((arr_7 [i_0]) < (arr_6 [i_0] [i_1] [i_2])))))))));
                                var_16 = (((((((arr_1 [i_0]) ? (arr_10 [i_0] [3] [i_4] [i_0] [3] [3]) : (arr_5 [i_4])))) ? (arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] [15]) : (min((arr_13 [i_0] [i_0] [15] [i_3 + 1] [i_4]), (arr_5 [1]))))));
                                arr_15 [i_0] [2] [i_2] [i_3] [i_4] [i_0] [i_1] = ((((((arr_13 [19] [i_0] [i_4] [i_0] [i_3 - 1]) ? (arr_13 [i_4] [i_0] [i_4] [i_0] [i_3 - 1]) : (arr_13 [i_3 - 2] [i_0] [i_3] [i_0] [i_3 - 2])))) ? ((-(arr_13 [i_4] [i_0] [10] [i_0] [i_3 + 1]))) : (arr_13 [i_3 - 1] [i_0] [i_0] [i_0] [i_3 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_17 *= (!4294967295);
                                arr_20 [i_0] [i_5] [22] [i_1] [i_0] = ((((max((arr_18 [i_5] [i_5 - 2] [1] [i_6] [1] [i_6]), (arr_4 [i_0] [i_5 + 1] [i_0])))) ? (arr_11 [0] [i_1]) : (((-410806689 < (min((arr_4 [1] [i_1] [i_0]), (arr_18 [i_0] [i_1] [20] [i_5] [i_6] [i_2]))))))));
                                var_18 ^= (arr_7 [i_2]);
                                var_19 = (max(var_19, ((max((((!(arr_6 [6] [6] [i_0])))), ((+(((arr_11 [i_0] [i_6]) + (arr_4 [i_2] [i_5] [i_2]))))))))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_2] [i_2] = ((((arr_9 [i_0] [i_1] [i_2]) * (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
            }
        }
    }
    var_20 = ((((var_11 ^ var_10) ? (!var_3) : (410806699 / -123))));
    #pragma endscop
}
