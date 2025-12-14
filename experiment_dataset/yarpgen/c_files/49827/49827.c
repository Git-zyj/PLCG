/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = max((arr_1 [i_0] [i_0 + 1]), (((((var_2 ? var_0 : -7646070917366973293))) ? (max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_1]))) : (min(var_5, var_2)))));
                arr_5 [i_0] [i_1] [i_0] = (min(((min((arr_0 [i_0 - 2]), (max(-7646070917366973297, 527971447448092980))))), (min(((-(arr_1 [i_0] [3]))), ((((arr_3 [i_0]) - (arr_3 [i_0]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_11 = (max((arr_7 [i_2] [i_2]), (max(((max((arr_8 [i_2] [i_2]), (arr_0 [i_2])))), (((arr_0 [i_2]) ? var_5 : 7646070917366973292))))));
        var_12 = (((((var_2 % (((arr_1 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : 799055928169325994))))) ? ((-(arr_1 [i_2] [i_2]))) : ((((arr_7 [i_2] [i_2]) ? (max((arr_2 [i_2] [i_2]), var_7)) : (arr_0 [i_2]))))));
    }
    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {
        arr_12 [i_3] = (max(((((arr_11 [i_3 + 1]) ? (arr_2 [i_3 + 2] [8]) : (arr_2 [i_3 - 4] [i_3])))), (((arr_11 [i_3 - 2]) ? (arr_11 [i_3 + 1]) : (arr_1 [8] [i_3])))));
        arr_13 [i_3] = (arr_0 [i_3]);
    }
    #pragma endscop
}
