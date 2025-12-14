/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_4 ? ((min(var_3, var_2))) : var_1)) | (max((var_6 == var_6), var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((arr_1 [i_0 - 1] [i_0 + 3]) ? var_5 : (arr_3 [3]))));
                var_14 = (min(var_14, ((min(((((((arr_3 [i_0 + 2]) ? (arr_1 [4] [1]) : (arr_0 [i_0])))) ? ((var_2 ? (arr_2 [i_0] [i_0]) : var_4)) : ((-(arr_2 [i_0] [i_0]))))), (((arr_0 [i_0 + 3]) << (((((arr_3 [i_0 - 1]) ^ (arr_4 [i_0 + 2] [i_0 + 2] [i_1 - 3]))) - 8848954960418354634)))))))));
                var_15 = (((((arr_3 [i_0 - 1]) != (arr_3 [i_0 - 1]))) ? ((min(-7491966365726858532, 1))) : ((var_11 ? (((arr_3 [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_3 [i_0]))) : (((var_8 ? (arr_2 [i_0 + 2] [i_1]) : var_5)))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [3] [0] [0] = (((min((arr_0 [i_0 + 1]), (arr_2 [i_0 + 3] [i_1 - 3]))) ? (((arr_0 [i_1 - 2]) ? (arr_0 [i_2]) : (arr_0 [i_0 - 1]))) : (((arr_6 [i_0] [i_1 + 1] [1]) ? (arr_0 [i_0 + 1]) : (arr_2 [i_0 + 2] [i_1 - 1])))));
                    var_16 = ((-322358215973641864 ? 1 : 1));
                }
            }
        }
    }
    var_17 = var_0;
    var_18 = var_0;
    #pragma endscop
}
