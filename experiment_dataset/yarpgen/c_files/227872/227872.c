/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (min((max(((35184372088831 >> (var_10 + 9212268945406309795))), ((min(-1039224623, (-2147483647 - 1)))))), ((min(var_9, (arr_3 [i_0] [i_2] [i_2 + 2]))))));
                    arr_7 [i_1] = ((var_14 ? (max((arr_4 [i_1 + 1] [i_1 + 1] [i_2 - 1]), (arr_4 [i_1 - 1] [i_1] [i_2 - 1]))) : ((-(arr_4 [i_1 - 1] [19] [i_2 + 1])))));
                    var_17 = ((1245533586 ? (~-467397831) : (467397837 || 5597806221473264203)));
                }
            }
        }
    }
    #pragma endscop
}
