/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-15319 > -13049) ? ((var_6 ? var_7 : ((var_9 ? -88 : var_5)))) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (((((((max(var_4, (arr_5 [i_2] [i_0])))) ^ (arr_6 [i_2 + 1] [i_2 + 3] [i_0])))) || ((((var_7 - var_10) - (arr_2 [i_0] [i_0]))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                    arr_9 [i_2] = (((min((var_15 + 51560), 13048))) ? ((((var_5 * 13048) * (((arr_3 [i_0] [3] [i_1]) ? var_3 : var_9))))) : (((((13065 - (arr_6 [i_0] [i_1] [i_2 - 1])))) / var_6)));
                    var_19 = (((arr_6 [i_2 + 3] [i_2 + 3] [i_2 + 1]) - ((max((arr_6 [i_2 + 4] [i_2 + 2] [i_2 + 4]), (arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
