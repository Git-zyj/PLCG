/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 += (((((~(arr_3 [i_0] [i_1] [i_1])))) ? (max(var_11, (arr_1 [i_0] [11]))) : ((-(arr_2 [i_1] [i_0])))));
                arr_5 [i_0] [i_1] = ((!((max(var_6, var_11)))));
                var_20 = ((((((2135707586 ? (arr_3 [i_0] [9] [i_1]) : var_8)) | (((var_4 + 2147483647) << (981192398 - 981192398))))) <= (((((max((arr_3 [i_0] [3] [i_1]), (arr_0 [i_0])))) && (var_0 >= 3372604220526674521))))));
                var_21 = (min(var_21, ((((arr_4 [i_1]) ? (((((1 < (arr_1 [i_1] [i_0])))))) : (max((((arr_3 [i_0] [i_0] [i_0]) ? var_6 : (arr_2 [i_1] [i_0]))), (arr_3 [i_0] [i_0] [i_1]))))))));
                var_22 ^= var_14;
            }
        }
    }
    #pragma endscop
}
