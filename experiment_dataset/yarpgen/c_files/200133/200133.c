/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_5, ((((-1746936157 + 2147483647) >> (-28 + 41))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (16721969421969391191 / 17209)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 += (((((arr_7 [1] [10] [i_0 + 1]) ? (arr_2 [i_0] [i_0 - 1]) : ((max((arr_0 [13] [i_1]), (arr_2 [i_3] [i_3])))))) == (arr_0 [i_1 - 1] [i_0 + 1])));
                            var_18 = (min(var_18, ((((((-((~(arr_2 [19] [i_1])))))) > ((~(max(15941459960143721348, 2505284113565830280)))))))));
                            var_19 = max(((min(53590, 138))), ((-(~var_14))));
                            arr_10 [1] [i_3] [i_3] [i_1] [11] [i_3] = (((!var_8) != (arr_9 [i_1] [17] [i_1])));
                            arr_11 [i_1] [1] [i_1] [i_1] = ((~(min(((min((arr_5 [17] [i_1] [i_1] [i_0 - 1]), (arr_9 [i_0] [15] [i_1])))), (min(var_14, var_12))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, var_6));
    var_21 = ((!(((var_9 + (var_8 ^ var_7))))));
    var_22 = (((((~(!var_0)))) ? ((-var_14 ? var_6 : ((0 ? (-127 - 1) : 0)))) : var_9));
    #pragma endscop
}
