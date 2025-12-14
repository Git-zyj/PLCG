/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))) ? (((arr_2 [5] [5]) & (arr_0 [i_0] [i_0]))) : (min((arr_4 [i_0]), (arr_4 [i_0]))))) / ((((max((arr_0 [1] [i_1]), var_13)) >> (((min((arr_4 [i_0 + 3]), (arr_3 [i_0 + 3]))) - 5563387805591105865)))))));
                arr_6 [i_0 + 1] [i_1 - 1] = (max((~var_8), (max((((arr_4 [i_1]) + var_4)), var_8))));
                arr_7 [i_0] [2] [i_1 + 2] = ((min((arr_0 [11] [i_1]), (((((arr_0 [i_0] [i_0]) + 2147483647)) >> (((arr_0 [i_0] [i_0]) + 1532815793)))))));
                var_15 = (max((min((arr_0 [i_0] [i_0]), (max((arr_3 [i_1]), (arr_3 [i_1 - 2]))))), ((min(var_13, (min((arr_1 [1] [i_1 + 1]), (arr_0 [i_0] [i_1]))))))));
                var_16 = ((((((var_0 & (arr_4 [i_1])))))) >= (min((max((arr_2 [i_0] [i_1]), var_7)), (arr_2 [i_0 - 1] [i_1]))));
            }
        }
    }
    var_17 = (max(((min((var_12 <= var_10), var_0))), (((min(var_1, var_0)) + ((min(var_8, var_6)))))));
    var_18 = (max((((!((max(var_6, var_8)))))), ((min(var_13, var_0)))));
    var_19 += var_14;
    #pragma endscop
}
