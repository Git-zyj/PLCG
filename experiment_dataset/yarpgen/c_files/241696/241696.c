/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((-(var_17 + var_15)))));
                    var_19 = max((~-1860733581234752677), (arr_2 [i_2] [i_1]));
                    var_20 = ((((max((max(2910379961, (arr_4 [i_0] [i_0] [i_0]))), ((min(var_17, 110)))))) || (((var_15 || var_3) || ((min(-1630706114592505224, (arr_1 [i_0] [i_1]))))))));
                }
            }
        }
    }
    var_21 = ((!((((~1936996413) ? (min(var_10, var_0)) : (var_11 >= var_9))))));
    #pragma endscop
}
