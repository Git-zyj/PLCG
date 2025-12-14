/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= -7525770731254250277;
    var_19 = max((((!((min(14373890610973609245, 215)))))), var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (max((((min(16602, var_2)))), (min(var_13, (((14373890610973609265 ? (arr_4 [i_0] [i_0] [i_1 + 1]) : (-127 - 1))))))));
                var_21 -= (((arr_1 [i_0]) ? ((((-9223372036854775781 != (arr_3 [i_1 + 1] [i_1 + 1]))))) : ((-((~(arr_2 [16] [i_0])))))));
                var_22 = (arr_0 [i_1 - 1] [i_1 - 1]);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_23 = (min(var_23, (((4072853462735942376 >> (var_13 - 4396899189314524218))))));
                            var_24 += ((-(min((arr_3 [i_2 + 1] [i_1 - 1]), (49779 ^ var_6)))));
                            var_25 -= ((-var_2 ? (arr_0 [i_0] [i_0]) : ((((var_16 && (arr_6 [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_14;
    #pragma endscop
}
