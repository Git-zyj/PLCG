/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 2]) / (arr_5 [i_2 - 1] [i_2 - 2] [i_2 - 2])))) ? (max((arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1]), (arr_5 [i_2 - 2] [i_2 + 1] [i_2 + 1]))) : (max((arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 1]), (arr_5 [i_2 - 2] [i_2 + 1] [i_2 + 1])))));
                    arr_6 [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                    var_20 = (((((4294967295 > (max((arr_1 [i_0] [i_0]), var_8))))) >> ((((((((arr_1 [i_1] [i_2 - 1]) ? var_17 : 0))) ? (583216821057478210 != var_14) : 834694572)) - 834694547))));
                }
            }
        }
    }
    #pragma endscop
}
