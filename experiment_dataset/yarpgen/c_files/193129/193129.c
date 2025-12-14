/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-14052 && 92);
    var_11 = (-2147483647 - 1);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (max((min((((arr_1 [i_0]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_0]))), ((min(92, (-2147483647 - 1)))))), (((((min((arr_4 [i_0] [i_2]), (arr_0 [i_1] [i_0])))) || (arr_4 [0] [i_1]))))));
                    arr_8 [i_0] [i_0] = (arr_2 [i_0] [i_1]);
                }
            }
        }
        arr_9 [i_0] = (max((arr_0 [i_0] [i_0]), (((!((((arr_5 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [17] [i_3] = (((arr_2 [i_3] [i_3]) ? (((arr_1 [i_3]) ? (arr_11 [i_3]) : ((((arr_3 [i_3] [8] [i_3]) ? (arr_4 [i_3] [i_3]) : (arr_4 [13] [i_3])))))) : ((((((arr_6 [i_3] [6] [i_3] [6]) ^ (arr_10 [i_3])))) & (((arr_11 [i_3]) & (arr_3 [i_3] [i_3] [i_3])))))));
        arr_13 [7] = (((524287 ? 18913 : 8065599152486329695)));
        arr_14 [2] [i_3] = min(((((((arr_10 [i_3]) >> (((arr_11 [i_3]) - 4633307575588258644))))) ? (arr_5 [i_3] [i_3] [i_3]) : (((((arr_6 [i_3] [i_3] [i_3] [i_3]) <= (arr_1 [i_3]))))))), (((arr_6 [i_3] [i_3] [i_3] [i_3]) & (arr_5 [i_3] [i_3] [i_3]))));
        arr_15 [i_3] [i_3] = (min(((2147483647 ? 1 : 596869522)), ((((arr_6 [i_3] [i_3] [i_3] [i_3]) >= (arr_6 [i_3] [i_3] [i_3] [i_3]))))));
    }
    var_12 = var_1;
    var_13 = ((((min(var_4, ((var_6 ? var_9 : var_1))))) / var_2));
    #pragma endscop
}
