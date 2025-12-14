/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1 - 1] [i_2] = ((((!((max(var_14, (arr_3 [i_1 - 1])))))) || ((((!var_0) ? ((((arr_1 [i_1] [i_1]) ? var_5 : (arr_4 [i_0])))) : (min(var_5, var_9)))))));
                    var_15 = ((min((arr_6 [i_0] [i_1 - 1] [i_2] [i_1]), (arr_6 [i_0] [i_1 - 1] [i_0] [i_2]))));
                }
            }
        }
    }
    var_16 = (min(var_16, (var_10 | var_13)));
    #pragma endscop
}
