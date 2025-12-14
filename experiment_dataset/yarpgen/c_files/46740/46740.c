/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (min(var_3, (var_9 && 3917527225)))));
    var_15 &= (var_3 < var_6);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((max(((var_3 ? (arr_6 [i_0 - 3] [i_0 - 3]) : (arr_6 [i_0 - 1] [i_0 + 2]))), ((-(arr_0 [i_0 - 3]))))))));
                    var_17 = (max((((arr_5 [i_1] [i_2 - 4]) ? (arr_5 [i_1] [i_2 - 4]) : (arr_5 [i_1] [i_2 - 4]))), (((arr_2 [i_0] [i_0 - 3]) ? ((min((arr_2 [i_0] [i_1]), 1))) : var_1))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_18 = min(var_11, (((arr_15 [i_6] [i_5 + 1] [i_3 - 1]) ? (arr_15 [i_6] [i_5 + 1] [i_3 - 1]) : (arr_15 [i_5 - 2] [i_5 + 2] [i_3 - 1]))));
                        var_19 = (min(var_2, 11));
                        var_20 = (((max((var_5 >= 35152), (arr_4 [i_6] [i_6]))) < (((min(1, var_9))))));
                        var_21 = ((-(arr_11 [i_3] [i_3 - 1])));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_22 = ((min((arr_3 [i_3 - 1]), 908399047)) >= (arr_8 [i_3] [i_6] [i_6]));
                            var_23 = (4294967295 * 86);
                            var_24 = (~-76);
                        }
                    }
                    var_25 = (max((min((arr_12 [i_5 + 2] [i_4]), (arr_12 [i_5 - 2] [0]))), (~var_12)));
                }
            }
        }
    }
    #pragma endscop
}
