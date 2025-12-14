/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((((-(((!(arr_2 [i_0] [i_2] [i_2]))))))) || (arr_3 [i_0] [i_0]))))));
                    var_16 = arr_7 [i_0];
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_10 [i_3] = (((min((arr_9 [i_3]), (arr_9 [i_3])))) ? ((((((arr_8 [i_3]) + 2147483647)) >> (((1138433687 | 21118) - 1138450146))))) : (~3364371901));
        var_17 += (((min((arr_9 [i_3]), (arr_8 [2]))) * (((((!(arr_8 [4]))))))));
    }
    #pragma endscop
}
