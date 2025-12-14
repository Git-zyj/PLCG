/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (31079 - 31079);
    var_19 = (((min((min(var_9, var_3)), ((max(var_4, var_9))))) / (var_3 - var_7)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((arr_3 [i_0] [i_1]) / ((((max((arr_2 [i_0] [i_0]), (arr_3 [i_0 + 2] [i_1])))))))))));
                var_21 = (min(var_21, (arr_0 [i_0] [12])));
                var_22 = (min(var_22, ((max((((max((arr_0 [i_0] [10]), (arr_0 [i_0] [2]))))), (arr_2 [i_0] [i_0]))))));
                var_23 |= (((((arr_0 [14] [14]) | (arr_0 [i_0] [1])))) <= (min((arr_2 [i_0 - 2] [i_1]), (((arr_0 [i_0 + 1] [0]) - (arr_2 [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
