/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_22 = (min((((-((1270573504 ? 1270573504 : 1))))), (((arr_5 [i_1] [i_2]) ? 8252612090346599497 : (((min((arr_5 [i_1] [4]), var_1))))))));
                    var_23 = (((((((((var_8 && (arr_8 [i_1 - 1] [i_2] [1] [i_2]))))) ^ ((3221225472 ? (arr_8 [i_1] [i_2] [i_2] [i_3]) : (arr_7 [9] [i_3])))))) ? ((((min(9770892504014948319, 1270573487))) ? (arr_5 [i_1] [i_1 - 1]) : 8675851569694603296)) : ((4294967295 ? (min((arr_5 [i_1] [i_2]), 16480859918813853191)) : 8675851569694603297))));
                    var_24 = (min(var_24, (min((max((arr_8 [i_1] [i_1] [i_2] [i_3]), (arr_4 [i_1 + 2]))), ((((arr_5 [i_1] [6]) == -25502)))))));
                }
            }
        }
    }
    #pragma endscop
}
