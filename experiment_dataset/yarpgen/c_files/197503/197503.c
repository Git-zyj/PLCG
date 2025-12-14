/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_0 + var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((arr_5 [i_0] [i_0]) ? (((14410737985838482710 ? 4036006087871068889 : 8380416))) : (arr_4 [i_0])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_13 = (((((-((((arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]) <= (arr_12 [i_0] [i_0] [i_0] [i_0]))))))) ? ((~(arr_2 [i_1] [i_2] [i_3]))) : (arr_5 [i_0] [i_0])));
                        var_14 += ((+((((arr_6 [i_3] [i_2]) >= (arr_10 [i_0] [4] [6]))))));
                        var_15 = (max(var_15, ((((((~(((arr_10 [i_0] [i_1] [1]) ? (arr_11 [i_0] [9] [i_0] [i_0] [i_0] [9]) : (arr_0 [i_0])))))) || ((((arr_2 [i_0] [i_0] [i_0]) | (min((arr_7 [i_0] [1] [i_2]), (arr_6 [i_0] [i_1])))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_16 = (max(((((arr_7 [i_1] [i_4 + 1] [i_2]) | (arr_16 [i_4 - 1] [i_4 - 1] [i_0])))), (arr_15 [i_0] [i_0] [i_2] [i_4 + 1] [i_4 + 1])));
                                var_17 *= ((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [7]) + (arr_0 [i_0])))) ? (((arr_10 [2] [i_1] [2]) + (arr_5 [4] [i_1]))) : (((max((arr_0 [i_4]), (arr_0 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
